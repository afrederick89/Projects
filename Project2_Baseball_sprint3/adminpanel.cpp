#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "modifystadium.h"
#include "modifysouvenir.h"
AdminPanel::AdminPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);
    populateGraph();

    ui->spacerLine->hide();
    this->tName = SQLManager::getInstance()->getAllTeams();
    this->souvenirInfo = SQLManager::getInstance()->getAllSouvenirs();
    this->popList();
    ui->TeamBox->addItems(teams);
    ui->TeamBox->setCurrentIndex(0);
    ui->StadiumRadio->setChecked(true);
    ui->SouvenirRadio->setChecked(false);
    this->on_StadiumRadio_clicked();

    for (auto vertex : this->graph->GetAllVertices()) {
        ui->BFSOriginComboBox->addItem(vertex->data.stadiumName);
        ui->DFSOriginComboBox->addItem(vertex->data.stadiumName);
    }
}

AdminPanel::~AdminPanel()
{
    delete ui;
}

void AdminPanel::populateGraph() {

    // populate graph data structure with vertices and edges information
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

            if (TripPlannerWindow::stadiumListContainsStadium(stadium, trulyAdjacentStadiums)) {

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

void AdminPanel::on_TeamBox_currentIndexChanged()
{
    if(ui->StadiumRadio->isChecked()){
        this->popStadium();
    } else {
        this->popSouvenir();
    }

    proxyModel->setFilterFixedString(ui->TeamBox->currentText());
    proxyModel->setFilterKeyColumn(0);
    ui->ModifyViewer->resizeColumnsToContents();
}

void AdminPanel::popList(){
    //    Stadium tempStadium;
    for(auto it = tName.begin();it != tName.end(); it++){
        teams.push_back(it->teamName);
        //        tempStadium.stadiumName = it->stadiumName;
        //        tempStadoum.seatingCapacity = it->seatingCapacity;
        //        tempStadium.location = it->location;
        //        tempStadium.playingSurface = it->playingSurface;
        //        tempStadium.league = it->league;
        //        tempStadium.dateOpened = it->dateOpened;
        //        tempStadium.distanceToCenterField = it->distanceToCenterField;
        //        tempStadium.ballparkTopology = it->ballparkTopology;
        //        tempStadium.roofType = it->roofType;
        //        stadiumInfo.push_back(tempStadium);
    }


}

void AdminPanel::popStadium(){
    //    StadiumTable* model = new StadiumTable(this->stadiumInfo);
    //    this->proxyModel = new QSortFilterProxyModel(this);
    //    proxyModel->setSourceModel(model);
    //    ui->ModifyViewer->setModel(proxyModel);
    //    ui->ModifyViewer->setSortingEnabled(true);

    //    ui->ModifyViewer->setColumnWidth(7, 150);
    //    ui->ModifyViewer->setColumnWidth(2, 100);
    //    ui->ModifyViewer->setColumnWidth(0, 150);
    //    ui->ModifyViewer->setColumnWidth(3, 175);

    //    ui->ModifyViewer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
    //        ui->tableView->setColumnHidden(i, false);
    //    }
    //    ui->ModifyViewer->horizontalHeader()->setStretchLastSection(false);
    this->refresh();
    TeamTableModel* model = new TeamTableModel(this->tName);
    this->proxyModel = new QSortFilterProxyModel(this);

    proxyModel->setSourceModel(model);
    ui->ModifyViewer->reset();
    ui->ModifyViewer->setModel(proxyModel);
    ui->ModifyViewer->setSortingEnabled(true);

    ui->ModifyViewer->setColumnWidth(7, 150);
    ui->ModifyViewer->setColumnWidth(2, 100);
    ui->ModifyViewer->setColumnWidth(0, 150);
    ui->ModifyViewer->setColumnWidth(3, 175);

    for (int i = 0; i < Team::COLUMN_COUNT; i++) {
        ui->ModifyViewer->setColumnHidden(i, false);
    }
    ui->ModifyViewer->horizontalHeader()->setStretchLastSection(false);
}
void AdminPanel::popSouvenir(){
    this->refresh();

    SouvenirTable* model = new SouvenirTable(this->souvenirInfo);
    this->proxyModel = new QSortFilterProxyModel(this);
    proxyModel->setSourceModel(model);
    ui->ModifyViewer->reset();
    ui->ModifyViewer->setModel(proxyModel);
    ui->ModifyViewer->setSortingEnabled(true);

    ui->ModifyViewer->setColumnWidth(7, 150);
    ui->ModifyViewer->setColumnWidth(2, 100);
    ui->ModifyViewer->setColumnWidth(0, 150);
    ui->ModifyViewer->setColumnWidth(3, 175);

    ui->ModifyViewer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    for (int i = 0; i < Souvenir::COLUMN_COUNT; i++) {
        ui->ModifyViewer->setColumnHidden(i, false);
    }
    ui->ModifyViewer->horizontalHeader()->setStretchLastSection(true);

}

void AdminPanel::on_StadiumRadio_clicked()
{
    ui->SouvenirRadio->setChecked(false);
    this->popStadium();
    proxyModel->setFilterFixedString(ui->TeamBox->currentText());
    proxyModel->setFilterKeyColumn(0);
    ui->ModifyViewer->resizeColumnsToContents();
}

void AdminPanel::on_SouvenirRadio_clicked()
{
    ui->StadiumRadio->setChecked(false);
    this->popSouvenir();
    qDebug() << ui->TeamBox->currentText();
    Team teamSelected = SQLManager::getInstance()->getStadiumByName(ui->TeamBox->currentText());

    proxyModel->setFilterFixedString(teamSelected.teamName);
    proxyModel->setFilterKeyColumn(0);
    ui->ModifyViewer->resizeColumnsToContents();
}

void AdminPanel::on_ModifyStadiumButton_clicked()
{
    ModifyStadium* mod = new ModifyStadium(tName[ui->TeamBox->currentIndex()], ui->ModifyViewer, this);
    mod->show();
}

void AdminPanel::on_pushButton_3_clicked()
{
    this->close();
}

void AdminPanel::refresh()
{
    this->tName = SQLManager::getInstance()->getAllTeams();
    this->souvenirInfo = SQLManager::getInstance()->getAllSouvenirs();
    this->popList();
}


void AdminPanel::on_ModifySouvenirButton_clicked()
{
    QList<Souvenir> modList;
    for(auto it= souvenirInfo.begin();it!= souvenirInfo.end();it++){
        if(ui->TeamBox->currentText() == it->teamName){
            modList.push_back(*it);
        }
    }
    if(modList.isEmpty()){
        Souvenir temp;
        temp.itemCost = 0.00;
        temp.itemName = "NA";
        temp.teamName = ui->TeamBox->currentText();
        modList.push_back(temp);
    }
    ModifySouvenir* mod = new ModifySouvenir(modList);
    mod->show();
}

void AdminPanel::on_pushButton_clicked()
{
    QList<Souvenir> modList;
    for(auto it= souvenirInfo.begin();it!= souvenirInfo.end();it++){
        if(ui->TeamBox->currentText() == it->teamName){
            modList.push_back(*it);
        }
    }
    if(modList.isEmpty()){
        Souvenir temp;
        temp.itemCost = 0.00;
        temp.itemName = "NA";
        temp.teamName = ui->TeamBox->currentText();
        modList.push_back(temp);
    }
    addSouvenir* add = new addSouvenir(modList);
    add->show();
}

void AdminPanel::on_pushButton_2_clicked()
{
    QList<Souvenir> modList;
    for(auto it= souvenirInfo.begin();it!= souvenirInfo.end();it++){
        if(ui->TeamBox->currentText() == it->teamName){
            modList.push_back(*it);
        }
    }
    if(modList.isEmpty()){
        Souvenir temp;
        temp.itemCost = 0.00;
        temp.itemName = "NA";
        temp.teamName = ui->TeamBox->currentText();
        modList.push_back(temp);
    }
    DeleteSouvenir* del = new DeleteSouvenir(modList, this);
    del->show();
}

void AdminPanel::on_ImportButton_clicked()
{
    SQLManager::getInstance()->getExpansionData();
    SQLManager::getInstance()->getExpansionDistance();
    this->refresh();

}

void AdminPanel::on_viewMSTButton_clicked()
{
    QString results;
    ui->traversalTypeHeader->setText("Minimum spanning tree");
    graph->GenerateMST(results);

    ui->resultsLabel->setText(results);
}

void AdminPanel::on_graphTraversalsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void AdminPanel::on_calcDFSFromTargetButon_clicked()
{
    ui->spacerLine->show();
    ui->traversalTypeHeader->setText("Depth first traversal starting from " + ui->DFSOriginComboBox->currentText());
    ui->resultsLabel->clear();
    Vertex* origin = this->graph->getVertexByStadiumName(ui->DFSOriginComboBox->itemText(ui->DFSOriginComboBox->currentIndex()));
    QList<Vertex*> visitedList;

    int totalDistance = 0;
    QString results;
    QList<int> lastTrackedDistances;
    results += origin->data.stadiumName + ", ";

    graph->CalculateDFS(results, origin, visitedList, lastTrackedDistances, totalDistance);

    ui->resultsLabel->setText(results);
}

void AdminPanel::on_calculateBFSButton_clicked()
{
    ui->spacerLine->show();
    ui->resultsLabel->clear();
    Vertex* origin = this->graph->getVertexByStadiumName(ui->BFSOriginComboBox->itemText(ui->BFSOriginComboBox->currentIndex()));
    ui->traversalTypeHeader->setText("Breadth first traversal starting from " + ui->BFSOriginComboBox->currentText());
    QList<Vertex*> visitedList;
    int totalDistance = 0;
    QString results;
    results = origin->data.stadiumName + ", ";

    graph->CalculateBFS(origin, totalDistance, results);
    qDebug() << results;
    ui->resultsLabel->setText(results);
}

void AdminPanel::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
