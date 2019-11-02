#include "tripplannerwindow.h"
#include "ui_tripplannerwindow.h"
#include <QAbstractItemView>
#include <QMessageBox>
#include "draggablelistmodel.h"
#include <QQueue>
#include "mainmenu.h"
#include <QRegExp>

TripPlannerWindow::TripPlannerWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TripPlannerWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setStyleSheet("background:url(\":/rc/bkgd.jpg\");");

    dijkstrasShortestPath   = false;
    mostEfficientlyVisitAll = false;
    ui->visitAllTeamsMostEfficiently->hide();
    QList<Team> teams = SQLManager::getInstance()->getAllTeams();



    // Dijkstras shortest path trip
    totalDistanceTraveled = 0;
    populateGraph();
    for (int i=0; i < teams.size(); i++) {
        ui->startingStadiumComboBox->addItem(teams.at(i).teamName, teams.at(i).teamName);
    }
    ui->souvenirsListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->shoppingCartListView->setModel(new QStringListModel(this));
    ui->shoppingCartListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->shoppingCartListView->hide();
    ui->shoppingCartLabel->hide();
    this->teams = teams;

    // User ordered trip:
    QStringList teamList;
    DraggableListModel* model = new DraggableListModel; // subclassed QStringListModel for drag-drop feature items

    for (auto team : teams) {
        ui->teamListComboBox->addItem(team.teamName);
    }


    ui->orderableListView->setModel(model);
    ui->orderableListView->setDragDropMode(QAbstractItemView::InternalMove);
    ui->orderableListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

TripPlannerWindow::~TripPlannerWindow()
{
    delete ui;
}

bool TripPlannerWindow::stadiumListContainsStadium(Team searchStadium, QList<Team> list) {

    bool contains = false;

    // Determines if list contains searchStadium
    for (auto stadium : list) {
        if (stadium.stadiumName == searchStadium.stadiumName) {
            contains = true;
        }
    }
    return contains;
}

void TripPlannerWindow::populateGraph() {
    SQLManager* sqlManager = SQLManager::getInstance();
    QList<Team> teams = sqlManager->getAllTeams();

    QList<Vertex*> vertexList;

    // First, allocate memory for all vertices in database, with empty edge lists for now
    for (auto team : teams) {
        Vertex* newVertex = new Vertex(team, QList<Edge*>());

        vertexList.push_back(newVertex);
    }

    // NEXT, loop through the list of vertices that we JUST populated, and see if it has any adjacent teams
    // We have to do it this way so that the pointers in each stadium's edgelist is the same address location as each vertex pointer in vertexList
    for (int i=0; i < vertexList.size(); i++) {
        Vertex* currVertex = vertexList.at(i);
        QList<Team> trulyAdjacentStadiums = sqlManager->getAdjacentStadiums(currVertex);
        QList<Edge*> edgeList;

        for (auto potentiallyAdjacentStadium : vertexList) {

            Team stadium = potentiallyAdjacentStadium->data;

            if (stadiumListContainsStadium(stadium, trulyAdjacentStadiums)) {

                int weightBetween = sqlManager->getWeightBetween(potentiallyAdjacentStadium, currVertex);

                if (weightBetween == -1) {
                    qDebug() << "Error encountered, tripplannerwindow::populateGraph";
                }

                Edge* newEdge = new Edge(potentiallyAdjacentStadium, weightBetween);
                edgeList.push_back(newEdge);

                //                qDebug() << currVertex->data.stadiumName << " has edge to " << newEdge->destination->data.stadiumName << " with weight << " << weightBetween;
            }

        }
        currVertex->edges = edgeList;
    }

    Graph* newGraph = new Graph(vertexList);
    this->graph = newGraph;
}

void TripPlannerWindow::on_startingStadiumComboBox_currentIndexChanged(int index)
{
    QList<Team> teams = SQLManager::getInstance()->getAllTeams();

    for (int i=0; i < teams.size(); i++) {
        ui->destinationStadiumComboBox->addItem(teams.at(i).teamName, teams.at(i).teamName);
    }

    this->originStadium = SQLManager::getInstance()->getTeamByName(teams.at(index).teamName);
}

void TripPlannerWindow::on_mostEfficientTripButton_clicked()
{
    dijkstrasShortestPath = true;
    //    ui->destinationTeamLabel->setText("Press the \"Take Trip\" button to take the shortest path from " + originStadium.teamName + " to " + destination->data.teamName);
    ui->stackedWidget->setCurrentIndex(1);
}

// NOTE: The origin has to be the same origin that was used in the previously completed dijkstra's traversal
void TripPlannerWindow::determineDijkstraPath(Vertex* origin, Vertex* destination, QList<Vertex*>& path) {
    if (origin == destination) {
        return;
    }

    if (destination->parent != NULL && origin != destination) {
        path.push_back(destination);
        determineDijkstraPath(origin, destination->parent, path);
    }
}

void TripPlannerWindow::populateStadiumInfo(Vertex* vertex) {
    QStringList souvenirsList;
    QStringListModel* souvenirListModel = new QStringListModel(this);

    QList<Souvenir> souvenirs = SQLManager::getInstance()->getSouvenirsByStadium(vertex->data.stadiumName);

    ui->currentTeamLabel->setText("Currently visiting: " + vertex->data.teamName);
    ui->currentStadiumLabel->setText("Stadium name: " + vertex->data.stadiumName);

    for (auto souvenir : souvenirs) {
        souvenirsList << "Item name: " + souvenir.itemName + "\nItem Price: " + QString::number(souvenir.itemCost, 'f', 2) + "\n\n";
    }

    souvenirListModel->setStringList(souvenirsList);
    ui->souvenirsListView->setModel(souvenirListModel);
    this->currentTeamSouvenirList = souvenirs;
}

void TripPlannerWindow::on_beginTripButton_clicked() {

    QStringList teamNameList;

    // Get all of the vertices (stadiums) in the map
    QList<Vertex*> vertexList = this->graph->GetAllVertices();
    QMap<Vertex*, int> distances;

    QString originTeamName      = ui->startingStadiumComboBox->currentData().toString();
    QString destinationTeamName = ui->destinationStadiumComboBox->currentData().toString();

    Vertex* origin = graph->getVertexByTeamName(originTeamName);
    this->destination = graph->getVertexByTeamName(destinationTeamName);

    this->graph->Dijkstras(origin, distances);


    qDebug() << "Calculating shortest path from " << origin->data.teamName << " to " << destination->data.teamName;
    QList<Vertex*> path;
    for (auto vertex : vertexList) {
        if (vertex == destination) {
            determineDijkstraPath(origin, destination, path);
        }
    }

    QString pathString;

    // unelegant reverse loop lol
    for (int i = (path.size() - 1); i >= 0; i--) {
        this->tripPathQueue.push_back(path[i]->parent);
    }

    this->tripPathQueue.push_back(destination);
    for (auto path : tripPathQueue) {
        qDebug() << "Pit stop: " << path->data.stadiumName;
    }

    this->tripPathQueue = tripPathQueue;
    ui->stackedWidget->setCurrentIndex(2);


    // begins the trip at the origin
    populateStadiumInfo(this->tripPathQueue.front());
    ui->totalDistanceTraveled->hide();
    ui->totalDistanceTraveled->setText("Total Distance Traveled: " + QString::number(distances[destination]) + " mi");
}

void TripPlannerWindow::updateShoppingCart(CartItem newCartItem) {
    QAbstractItemModel* model = ui->shoppingCartListView->model();
    QStringList list        = static_cast<QStringListModel*>(model)->stringList();

    list << "► " + newCartItem.item.itemName + " | $" + QString::number(newCartItem.item.itemCost, 'f', 2) + "\n\n";

    static_cast<QStringListModel*>(model)->setStringList(list);
    ui->shoppingCartListView->setModel(static_cast<QStringListModel*>(model));

}
void TripPlannerWindow::on_souvenirsListView_doubleClicked(const QModelIndex &index)
{
    // Show the shopping cart list view if this is the first item added to the cart
    if (shoppingCart.isEmpty()) {
        ui->shoppingCartListView->show();
        ui->shoppingCartLabel->show();
    }
    Team stadiumPurchasedAt    = SQLManager::getInstance()->getTeamByName(this->currentTeamSouvenirList[index.row()].stadiumName);
    Souvenir souvenirPurchased = this->currentTeamSouvenirList.at(index.row());
    CartItem newCartItem(souvenirPurchased, stadiumPurchasedAt);
    shoppingCart.push_back(newCartItem);
    updateShoppingCart(newCartItem);

}

void TripPlannerWindow::on_shoppingCartListView_doubleClicked(const QModelIndex &index)
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "", "Are you sure you want to remove " + shoppingCart.at(index.row()).item.itemName + " from your cart?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        this->shoppingCart.at(index.row());
        QAbstractItemModel* model = ui->shoppingCartListView->model();
        model->removeRow(index.row());
        ui->shoppingCartListView->setModel(static_cast<QStringListModel*>(model));
    }
}

void TripPlannerWindow::on_takeTripButton_clicked()
{
    // END OF TRIP
    if (ui->takeTripButton->text() == "End Trip") {
        if (!this->shoppingCart.isEmpty()) {
            // TO DO: Souvenir order list and summary page

            QList<CartItem> finalShoppingCart;
            QStringListModel* model = new QStringListModel;
            model = static_cast<QStringListModel*>(ui->shoppingCartListView->model());
            QStringList      list  = model->stringList();

            QStringList      formattedSummaryPage;

            Team currentTeam = shoppingCart.at(0).stadiumPurchasedAt;


            formattedSummaryPage << currentTeam.teamName + " @ " + currentTeam.stadiumName + "\n"
                                                                                             "----------------------------------\n";
            double  stadiumGrandTotal = 0;
            double  grandTotal        = 0;
            for (auto cartItem : shoppingCart) {
                if (cartItem.stadiumPurchasedAt.stadiumName != currentTeam.stadiumName) {
                    currentTeam = cartItem.stadiumPurchasedAt;
                    formattedSummaryPage << "Total: $" + QString::number(stadiumGrandTotal, 'f', 2) + "\n\n";
                    stadiumGrandTotal = 0;
                    formattedSummaryPage << cartItem.stadiumPurchasedAt.teamName + " @ " + cartItem.stadiumPurchasedAt.stadiumName + "\n"
                                                                                                                                     "----------------------------------\n";

                }
                stadiumGrandTotal += cartItem.item.itemCost;
                grandTotal        += cartItem.item.itemCost;
                formattedSummaryPage << "x1 " + cartItem.item.itemName + " - $" + QString::number(cartItem.item.itemCost) + "\n";
            }
            formattedSummaryPage << "Total: $" + QString::number(stadiumGrandTotal, 'f', 2) + "";
            formattedSummaryPage << "---------------------\n\n";
            formattedSummaryPage << "Grand total: $" + QString::number(grandTotal, 'f', 2);
            ui->summaryListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->stackedWidget->setCurrentIndex(4);

            QStringListModel* summaryModel = new QStringListModel;
            summaryModel->setStringList(formattedSummaryPage);
            ui->summaryListView->setModel(summaryModel);
        } else {
            ui->stackedWidget->setCurrentIndex(4);
            ui->tripSummaryLabel->setText("No items purchased!");
            ui->summaryListView->hide();

        }
    }

    // DIJKSTRAS SHORTEST PATH FROM A --> B
    if (dijkstrasShortestPath) {
        // traverse to destination using shortest path generated from dijkstras algorithm
        populateStadiumInfo(tripPathQueue.back());
        ui->destinationTeamLabel->hide();

        // set the distance label to be visible
        ui->totalDistanceTraveled->show();
        ui->takeTripButton->setText("End Trip");
    } else {
        // custom trip
        qDebug() << "ordered teams to visit: " << orderedTeamsToVisit.size();
        if (!orderedTeamsToVisit.isEmpty()) {
            qDebug() << "size of orderedlist: " << orderedTeamsToVisit.size();
            QString nextStadiumName = this->orderedTeamsToVisit.front().stadiumName;
            Vertex* nextVertex = this->graph->getVertexByStadiumName(nextStadiumName);

            if (orderedTeamsToVisit.size() == 1) {
                ui->takeTripButton->setText("End Trip");
            }
            populateCustomTripIteration(orderedTeamsToVisit.front());
        }
    }
}

void TripPlannerWindow::on_customTripButton_clicked()
{
    ui->visitAllTeamsMostEfficiently->setText("Add all teams");
    ui->visitAllTeamsMostEfficiently->show();
    ui->stackedWidget->setCurrentIndex(3);
}
bool TripPlannerWindow::teamsToVisitListContains(Team teamToAdd) {
    bool contains = false;

    for (auto team : teamsToVisit) {
        if (team.teamName == teamToAdd.teamName) {
            contains = true;
        }
    }
    return contains;
}

void TripPlannerWindow::on_addTeamButton_clicked()
{
    Team teamToAdd = this->teams.at(ui->teamListComboBox->currentIndex());

    if (!teamsToVisitListContains(teamToAdd)) {
        DraggableListModel* model       = static_cast<DraggableListModel*>(ui->orderableListView->model());
        QStringList teamsToVisitList    = model->stringList();

        // Append the new team to the listView
        teamsToVisitList << teamToAdd.teamName +  " at " + teamToAdd.stadiumName + "\n\n";

        model->setStringList(teamsToVisitList);
        ui->orderableListView->setModel(model);
        this->teamsToVisit.push_back(teamToAdd);

    } else {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::critical(this, "", "There is already a team with that name on your list!",
                                      QMessageBox::Ok);
    }
}

void TripPlannerWindow::populateCustomTripIteration(Team teamToVisit) {

    ui->currentTeamLabel->setText("Currently visiting: " + teamToVisit.teamName);
    ui->currentStadiumLabel->setText("Stadium name: " + teamToVisit.stadiumName);
    // Find the fastest route from the current team to the next team on the user's ordered list of teams to visit...


    QStringList         souvenirsList;
    QStringListModel*   souvenirListModel = new QStringListModel(this);
    QList<Souvenir>     souvenirs         = SQLManager::getInstance()->getSouvenirsByStadium(teamToVisit.stadiumName);

    for (auto souvenir : souvenirs) {
        souvenirsList << "Item name: " + souvenir.itemName + "\nItem Price: " + QString::number(souvenir.itemCost, 'f', 2) + "\n\n";
    }


    souvenirListModel->setStringList(souvenirsList);
    ui->souvenirsListView->setModel(souvenirListModel);
    this->currentTeamSouvenirList = souvenirs;

    ui->stackedWidget->setCurrentIndex(2);

    totalDistanceTraveled += aggregatedTripDistances.front();
    ui->totalDistanceTraveled->setText("Distance traveled: " + QString::number(totalDistanceTraveled) + " miles");


    qDebug() << "Vertex: " << orderedTeamsToVisit.front().teamName;

    orderedTeamsToVisit.pop_front();
    aggregatedTripDistances.pop_front();
}
void TripPlannerWindow::on_beginCustomTripButton_clicked()
{
    // Loads the teams and the order of the teams that the user has added to their list into QList for trip traversal
    DraggableListModel* model = static_cast<DraggableListModel*> (ui->orderableListView->model());
    QList<Team> orderedTeamsToVisit;
    QString sep(" at ");

    if (model->rowCount() > 1) {
        if (!mostEfficientlyVisitAll) {

            for (auto listItem : model->stringList()) {

                QStringList parts = listItem.split(" at ", QString::SkipEmptyParts);
                QString teamName = parts.at(0);
                qDebug() << parts[0];
                Team teamToVisit = SQLManager::getInstance()->getStadiumByName(teamName);
                orderedTeamsToVisit.push_back(teamToVisit);
                qDebug() << "New ordered team: " << orderedTeamsToVisit.back().stadiumName;
            }

            this->orderedTeamsToVisit = orderedTeamsToVisit;

            int aggregatedTripDistance = 0;
            aggregatedTripDistances.push_back(0);

            for (int i=0; i < (orderedTeamsToVisit.size() - 1); i++) {
                Vertex* origin      = graph->getVertexByTeamName(orderedTeamsToVisit.at(i).teamName);
                Vertex* destination = graph->getVertexByTeamName(orderedTeamsToVisit.at(i+1).teamName);
                QMap<Vertex*, int> distances;

                this->graph->Dijkstras(origin, distances);
                qDebug() << "A[" << i << "]: " << QString::number(aggregatedTripDistance + distances[destination]);

                QList<Vertex*> path;
                determineDijkstraPath(origin, destination, path);

                for (auto vertex : path) {
                    qDebug() << "Pit stop: " << vertex->data.stadiumName;
                }

                this->aggregatedTripDistances.push_back(aggregatedTripDistance + distances[destination]);

            }

        } else {

            for (auto listItem : model->stringList()) {
                QStringList parts = listItem.split(" at ", QString::SkipEmptyParts);
                QString teamName = parts.at(0);
                qDebug() << parts[0];
                Team teamToVisit = SQLManager::getInstance()->getStadiumByName(teamName);
                orderedTeamsToVisit.push_back(teamToVisit);
            }

            this->orderedTeamsToVisit = orderedTeamsToVisit;
            // begin da recursion
            QList<Vertex*> visitedList;

            visitedList.push_back(graph->getVertexByTeamName(orderedTeamsToVisit.front().teamName));

            VisitCustomMostEfficiently(graph->getVertexByTeamName(orderedTeamsToVisit.front().teamName), visitedList, 0);
            this->orderedTeamsToVisit.clear();

            // re order the list in most efficient way possible from dijkstras recursion
            for (auto vertex : visitedList) {
                this->orderedTeamsToVisit.push_back(vertex->data);
            }
        }

        QStringList         souvenirsList;
        QStringListModel*   souvenirListModel = new QStringListModel(this);
        QList<Souvenir>     souvenirs         = SQLManager::getInstance()->getSouvenirsByStadium(orderedTeamsToVisit.front().stadiumName);


        for (auto souvenir : souvenirs) {
            souvenirsList << "Item name: " + souvenir.itemName + "\nItem Price: " + QString::number(souvenir.itemCost, 'f', 2) + "\n\n";
        }

        souvenirListModel->setStringList(souvenirsList);
        ui->souvenirsListView->setModel(souvenirListModel);
        this->currentTeamSouvenirList = souvenirs;


        on_takeTripButton_clicked();

    } else {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::critical(this, "", "You need to add at least two teams to the list!",
                                      QMessageBox::Ok);

    }
}

void TripPlannerWindow::on_backButton2_clicked()
{
    MainMenu* newMM = new MainMenu;
    newMM->show();
    this->close();
}

void TripPlannerWindow::on_backButton_clicked()
{
    MainMenu* newMM = new MainMenu;
    newMM->show();
    this->close();

}

void TripPlannerWindow::on_pushButton_clicked()
{
    MainMenu* newMM = new MainMenu;
    newMM->show();
    this->close();
}

void TripPlannerWindow::on_abortButton_clicked()
{
    MainMenu* newMM = new MainMenu;
    newMM->show();
    this->close();

}



void TripPlannerWindow::on_backButton_2_clicked()
{
    MainMenu* NewMM = new MainMenu;
    this->close();
    NewMM->show();
}

bool TripPlannerWindow::visitedListContains(QList<Vertex*> visitedList, Vertex* vertexSearch) {
    bool contains = false;

    for (auto vertex : visitedList) {
        if (vertex->data.stadiumName == vertexSearch->data.stadiumName) {
            contains = true;
        }
    }

    return contains;
}


bool TripPlannerWindow::orderedListContains(QList<Team> list, Team searchTeam) {
    bool contains = false;

    for (auto team : list) {
        if (searchTeam.stadiumName == team.stadiumName) {
            contains = true;
        }
    }

    return contains;
}



void TripPlannerWindow::VisitCustomMostEfficiently(Vertex* currVertex, QList<Vertex*>& visitedList, int aggregatedDistanceTraveled) {

    static QList<int> aggregatedDistances;

    if (visitedList.size() == orderedTeamsToVisit.size()) {
        // we done
        this->aggregatedTripDistances = aggregatedDistances;
        return;
    }

    if (aggregatedDistances.size() == 0) {
        aggregatedDistances.push_back(0);
    }

    QMap<Vertex*, int> distances;
    this->graph->Dijkstras(currVertex, distances);

    QList<int> distanceInts = distances.values();
    std::sort(distanceInts.begin(), distanceInts.end());

    distanceInts.pop_front(); // the front is always going to be zero (distance from a vertex to itself is always the shortest path)
    Vertex* nextClosest = NULL;

    while (!orderedListContains(orderedTeamsToVisit, distances.key(distanceInts.front())->data) || visitedListContains(visitedList, distances.key(distanceInts.front()))) {
        distanceInts.pop_front();
    }
    nextClosest = distances.key(distanceInts.front());

    visitedList.push_back(nextClosest);
    aggregatedDistances.push_back(distanceInts.front()); // accumulate the total distance traveled
    aggregatedDistanceTraveled += distanceInts.front();

    VisitCustomMostEfficiently(nextClosest, visitedList, (aggregatedDistanceTraveled + distanceInts.front()));
    qDebug() << "Next closest, specified stadium to visit from " << currVertex->data.stadiumName << " is " << nextClosest->data.stadiumName;


}

void TripPlannerWindow::VisitAllMostEfficiently(Vertex* currVertex, QList<Vertex*>& visitedList, int aggregatedDistanceTraveled, int backTrackNum) {

    static QList<int> aggregatedDistances;

    if (aggregatedDistances.size() == 0) {
        aggregatedDistances.push_back(0);
    }
    if (visitedList.size() == graph->GetAllVertices().size()) {
        // we done
        this->aggregatedTripDistances = aggregatedDistances;
        return;
    }
    qDebug() << "Visited list: " << visitedList.size();
    Vertex* nextClosest    = NULL;
    int     shortestWeight = 999999;

    for (auto edge : currVertex->edges) {

        if (edge->weight < shortestWeight && !visitedListContains(visitedList, edge->destination)) {
            shortestWeight = edge->weight;
            nextClosest = edge->destination;
        }
    }

    if (nextClosest == NULL) {
        // gotta back track until we have visited all stadiums
        ++backTrackNum;
        qDebug() << "Back tracking to " << visitedList.at(visitedList.size() - backTrackNum)->data.stadiumName;
        VisitAllMostEfficiently(visitedList.at(visitedList.size() - backTrackNum), visitedList, aggregatedDistanceTraveled, backTrackNum);

    } else {
        visitedList.push_back(nextClosest);
        aggregatedDistances.push_back(shortestWeight); // accumulate the total distance traveled
        aggregatedDistanceTraveled += shortestWeight;

        qDebug() << "\nVisiting next closest neighbor: " << nextClosest->data.stadiumName << " with weight " << shortestWeight;
        qDebug() << "Total distance now traveled: " << aggregatedDistances.last();
        qDebug() << "\n";
        VisitAllMostEfficiently(nextClosest, visitedList, aggregatedDistanceTraveled);
    }

}

void TripPlannerWindow::populateMostEfficientFromComerica(Team teamToVisit) {

    ui->currentTeamLabel->setText("Currently visiting: " + teamToVisit.teamName);
    ui->currentStadiumLabel->setText("Stadium name: "    + teamToVisit.stadiumName);

    // Find the fastest route from the current team to the next team on the user's ordered list of teams to visit...
    QStringList         souvenirsList;
    QStringListModel*   souvenirListModel = new QStringListModel(this);
    QList<Souvenir>     souvenirs         = SQLManager::getInstance()->getSouvenirsByStadium(teamToVisit.stadiumName);

    for (auto souvenir : souvenirs) {
        souvenirsList << "Item name: " + souvenir.itemName + "\nItem Price: " + QString::number(souvenir.itemCost, 'f', 2) + "\n\n";
    }


    souvenirListModel->setStringList(souvenirsList);
    ui->souvenirsListView->setModel(souvenirListModel);
    this->currentTeamSouvenirList = souvenirs;

    ui->stackedWidget->setCurrentIndex(2);

    totalDistanceTraveled += aggregatedTripDistances.front();
    ui->totalDistanceTraveled->setText("Distance traveled: " + QString::number(totalDistanceTraveled) + " miles");

    orderedTeamsToVisit.pop_front();
    aggregatedTripDistances.pop_front();
}
void TripPlannerWindow::on_visitAllTeamsMostEfficiently_clicked() {

//    if (mostEfficientlyVisitAll) {
        for (auto vertex : this->graph->GetAllVertices()) {
            if (!teamsToVisitListContains(vertex->data)) {
                DraggableListModel* model       = static_cast<DraggableListModel*>(ui->orderableListView->model());
                QStringList         list        = model->stringList();

                // Append the new team to the listView
                list << vertex->data.teamName +  " at " + vertex->data.stadiumName + "\n\n";

                model->setStringList(list);
                ui->orderableListView->setModel(model);
                this->teamsToVisit.push_back(vertex->data);

            }
        }
//    }
}

void TripPlannerWindow::on_customMostEfficientTripButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->visitAllTeamsMostEfficiently->show();
    this->mostEfficientlyVisitAll = true;
}

