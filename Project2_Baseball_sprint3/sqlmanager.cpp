/**********************************************************
 *
 * The SQL Manager class should have functions that will
 * either pass data in vectors, or return data in vectors,
 * including converting passed vectors into SQLite queries,
 * and vice versa.
 *
**********************************************************/

/*******************************************************************************
 * This is how each team and corresponding stadium is defined up in the table
 * CREATE TABLE `mlb_info` (
    `team_name`	text,
    `stadium_name`	text,
    `seating_capacity`	double,
    `location`	text,
    `playing_surface`	text,
    `league`	text,
    `date_opened`	int,
    `distance_to_center_field`	text,
    `ballpark_topology`	text,
    `roof_type`	text
);
********************************************************************************/
#include "sqlmanager.h"
#include "tripplannerwindow.h"
#include <QQueue>

// Sets the static data member to NULL.
SQLManager* SQLManager::managerInstance = NULL;

SQLManager::SQLManager()
{
    DBInstance = QSqlDatabase::addDatabase("QSQLITE");
    DBInstance.setDatabaseName(QDir::homePath() + "/CS1D_Baseball/resources/database/database.db");

    // Check if the database is opened, log to console the result
    if (!DBInstance.open()){
        qDebug() << "ERROR: Connection to database failed.";
    } else {
        qDebug() << "Connection to database successful.";
    }
}

SQLManager* SQLManager::getInstance()
{
    if (managerInstance == NULL)
    {
        // Should only be executed once per runtime
        managerInstance = new SQLManager();
    }
    return managerInstance;
}

QList<Team> SQLManager::getMaxMinDistanceToCF(bool max) {
    QSqlQuery query;
    QList<Team> filteredTeams;
    if (!max) {
        query.prepare("SELECT team_name, stadium_name, distance_to_center_field FROM mlb_info ORDER BY distance_to_center_field ASC");
    } else {
        query.prepare("SELECT team_name, stadium_name, distance_to_center_field FROM mlb_info ORDER BY distance_to_center_field DESC");
    }
    if (query.exec()) {
        if (query.first()) {

            double extremum = query.value(2).toDouble(); //either a max or minimum
            while (query.isValid()) {
                if (query.value(2).toDouble() == extremum) {
                    Team team = this->getTeamByName(query.value(1).toString());
                    filteredTeams.push_back(team);

                }
                query.next();

            }
        }
    }
    return filteredTeams;
}

bool SQLManager::modifyStadiumInfo(Team inTeam){
    QSqlQuery query;
    bool success = false;
    query.prepare("UPDATE mlb_info SET stadium_name = :stadium_name, seating_capacity = :seating, location = :loc,"
                  "playing_surface = :pSurf, league = :lea, date_opened = :dOpen, distance_to_center_field = :dCF,"
                  "ballpark_topology = :top, roof_type = :roof WHERE team_name = :team_name");
    query.bindValue(":team_name", inTeam.teamName);
    query.bindValue(":stadium_name", inTeam.stadiumName);
    query.bindValue(":seating", inTeam.seatingCapacity);
    query.bindValue(":loc", inTeam.location);
    query.bindValue(":pSurf", inTeam.playingSurface);
    query.bindValue(":lea", inTeam.league);
    query.bindValue(":dOpen", inTeam.dateOpened);
    query.bindValue(":dCF", inTeam.distanceToCenterField);
    query.bindValue(":top", inTeam.ballparkTopology);
    query.bindValue(":roof", inTeam.roofType);

    if(query.exec()){
        return true;
    } else {
        return false;
    }
}
bool SQLManager::modifySouvenirInfo(Souvenir inSouve){
    QSqlQuery query;
    query.prepare("update souvenir_info set item_price = :price where stadium_name = :stadium_name AND item_name = :name");
    query.bindValue(":name", inSouve.itemName);
    query.bindValue(":price", inSouve.itemCost);
    query.bindValue(":stadium_name", inSouve.stadiumName);
    if(query.exec()){
        return true;
    } else {
        return false;
    }
}
bool SQLManager::addSouvenir(Souvenir inS){
    QSqlQuery query;
    query.prepare("insert into souvenir_info (stadium_name, item_name, item_price)"
                  "values (:stadium, :item, :cost)");
    query.bindValue(":stadium", inS.stadiumName);
    query.bindValue(":item", inS.itemName);
    query.bindValue(":cost", inS.itemCost);
    if(query.exec()){
        return true;
    } else {
        return false;
    }
}
bool SQLManager::delSouvenir(Souvenir delS){
    QSqlQuery query;

    query.prepare("delete from souvenir_info where stadium_name = :stadium and item_name = :iName");
    query.bindValue(":stadium", delS.stadiumName);
    query.bindValue(":iName", delS.itemName);
    if(query.exec()){
        return true;
    } else {
        return false;
    }

}
bool SQLManager::authenticateAdminLoginRequest(QString name, QString password)
{
    bool isAdmin = false;
    //   QSqlQuery query;
    //   query.prepare("SELECT username, password FROM admins WHERE lower(username)=lower(:username)");
    //    query.bindValue(":username", name);
    //    query.bindValue(":password", password);

    //    if (query.exec()) {
    //        if (query.first()) {
    //            if (query.value(1).toString().toLower() == password.toLower()) {
    //                // the username and password inputted is an admin account
    //                isAdmin = true;
    //            }
    //        }
    //    } else {
    //        isAdmin = false;
    //    }
    if(name == "admin" && password == "123"){
        isAdmin = true;
    }
    return isAdmin;
}

QList<Team> SQLManager::getAllTeams() {
    QSqlQuery query;
    QList<Team> teamList;

    if (query.exec("SELECT team_name, stadium_name, seating_capacity, location, playing_surface, league, date_opened,"
                   "distance_to_center_Field, ballpark_topology, roof_type FROM mlb_info")) {
        if (query.first()) {
            while (query.isValid()) {
                QString teamName          = query.value(0).toString();
                QString stadiumName       = query.value(1).toString();
                int     seatingCapacity   = query.value(2).toInt();
                QString location          = query.value(3).toString();
                QString playingSurface    = query.value(4).toString();
                QString league            = query.value(5).toString();
                int     dateOpened        = query.value(6).toInt();
                int distanceToCF      = query.value(7).toInt();
                QString ballparkTopology  = query.value(8).toString();
                QString roofType          = query.value(9).toString();

                // initialize the team to be added to the teamList (QList)
                Team tempTeam = Team(teamName, stadiumName, seatingCapacity, location, playingSurface, league,
                                     dateOpened, distanceToCF, ballparkTopology, roofType);
                teamList.append(tempTeam);
                query.next();
            }
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return teamList;
}

Team SQLManager::getStadiumByName(QString teamName)
{
    QSqlQuery query;
    Team tempTeam;
    query.prepare("SELECT team_name, stadium_name, seating_capacity, location, playing_surface, league, date_opened,"
                  "distance_to_center_Field, ballpark_topology, roof_type FROM mlb_info WHERE lower(team_name)=lower(:teamName)");
    query.bindValue(":teamName", teamName);

    if (query.exec()) {
        if (query.first()) {
            QString stadiumName       = query.value(1).toString();
            int     seatingCapacity   = query.value(2).toInt();
            QString location          = query.value(3).toString();
            QString playingSurface    = query.value(4).toString();
            QString league            = query.value(5).toString();
            int     dateOpened        = query.value(6).toInt();
            int     distanceToCF      = query.value(7).toInt();
            QString ballparkTopology  = query.value(8).toString();
            QString roofType          = query.value(9).toString();
            tempTeam                  = Team(teamName, stadiumName, seatingCapacity, location, playingSurface, league,
                                             dateOpened, distanceToCF, ballparkTopology, roofType);
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return tempTeam;
}

QList<Souvenir> SQLManager::getSouvenirsByStadium(QString stadiumName)
{
    QSqlQuery query;
    QList<Souvenir> souvenirList;
    query.prepare("SELECT item_name, item_price FROM souvenir_info WHERE stadium_name=:stadiumName");
    query.bindValue(":stadiumName", stadiumName);
    Team team = getTeamByName(stadiumName);

    if (query.exec()) {
        if (query.first()) {
            while (query.isValid()) {
                souvenirList.push_back(Souvenir(team.teamName, stadiumName, query.value(0).toString(), query.value(1).toDouble()));
                query.next();
            }
        }
    }
    qDebug() << "Souvenir list size: " << souvenirList.size();

    return souvenirList;
}


Team SQLManager::getTeamByName(QString stadiumName)
{
    QSqlQuery query;
    QList<Team> teamList;
    Team tempTeam;
    query.prepare("SELECT team_name, stadium_name, seating_capacity, location, playing_surface, league, date_opened,"
                  "distance_to_center_Field, ballpark_topology, roof_type FROM mlb_info WHERE lower(stadium_name)=lower(:stadiumName)");
    query.bindValue(":stadiumName", stadiumName);

    if (query.exec()) {
        if (query.first()) {
            QString teamName          = query.value(0).toString();
            int     seatingCapacity   = query.value(2).toInt();
            QString location          = query.value(3).toString();
            QString playingSurface    = query.value(4).toString();
            QString league            = query.value(5).toString();
            int     dateOpened        = query.value(6).toInt();
            int     distanceToCF      = query.value(7).toInt();
            QString ballparkTopology  = query.value(8).toString();
            QString roofType          = query.value(9).toString();
            tempTeam                  = Team(teamName, stadiumName, seatingCapacity, location, playingSurface, league,
                                             dateOpened, distanceToCF, ballparkTopology, roofType);
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return tempTeam;
}
QList<Souvenir> SQLManager::getAllSouvenirs(){
    QSqlQuery query;
    QList<Souvenir> souvenirList;

    if (query.exec("Select stadium_name, item_name, item_price FROM souvenir_info")){
        if(query.first()){
            while(query.isValid()){

                QString stadiumName = query.value(0).toString();
                Team team = this->getTeamByName(stadiumName);

                QString itemName = query.value(1).toString();
                double itemCost = query.value(2).toDouble();

                Souvenir tempSouvenir = Souvenir(team.teamName, stadiumName, itemName,itemCost);
                souvenirList.append(tempSouvenir);
                query.next();
            }
        }
    } else {
        qDebug() << "SQL Error: " << query.lastError().text();
    }
    return souvenirList;
}

// Returns a list of all the teams that are adjacent to originStadium
QList<Team> SQLManager::getAdjacentStadiums(Vertex* originStadium)
{
    QSqlQuery query;
    QList<Team> adjacentStadiums;

    query.prepare("SELECT originated_stadium, destination_stadium, distance FROM distance_between_stadiums WHERE originated_stadium=:originStadium");
    query.bindValue(":originStadium", originStadium->data.stadiumName);

    if (query.exec()) {
        if (query.first()) {
            while (query.isValid()) {
                Team adjacentStadium = getTeamByName(query.value(1).toString());

                adjacentStadiums.push_back(adjacentStadium);
                query.next();
            }
        }
    }
    return adjacentStadiums;
}

int SQLManager::getWeightBetween(Vertex* A, Vertex* B) {
    QSqlQuery query;
    int weight = -1;

    query.prepare("SELECT originated_stadium, destination_stadium, distance FROM distance_between_stadiums WHERE lower(originated_stadium)=lower(:A) AND lower(destination_stadium)=lower(:B)");
    query.bindValue(":A", A->data.stadiumName);
    query.bindValue(":B", B->data.stadiumName);

    if (query.exec()) {
        if (query.first()) {
            weight = query.value(2).toInt();
        }
    } else {
        qDebug() << "Error: " << query.lastError().text();
    }

    return weight;
}
void SQLManager::importData(QStringList &input_array, QString input_file_location){

    QStringList line_name_seperated;
    QString line_name;
    QString file_location = input_file_location;

    QFile search_file(file_location);

    QTextStream stream(&search_file);

    search_file.open(QIODevice::ReadWrite | QIODevice::Text);

    line_name = stream.readLine();


    while(!line_name.isNull()){

        if(line_name.size() < 1){
            line_name = stream.readLine();
            continue;
        }

        line_name_seperated = line_name.split(QRegularExpression("(?<!\"[0-9]{2}),(?! )"), QString::SkipEmptyParts);


        for(int count = 0; count < line_name_seperated.count(); count++)
        {
            line_name = line_name_seperated.at(count);
            if(line_name.contains("\""))
            {
                line_name.remove("\"");
                input_array.append(line_name);
                continue;
            }

            input_array.append(line_name_seperated.at(count));
        }

        line_name_seperated.clear();
        line_name = stream.readLine();
    }


    search_file.close();

}
void SQLManager::getExpansionData(){
    QStringList input_array;
    QString file_location = QDir::homePath() + "/CS1D_Baseball/resources/baseball info/MLB Information Expansion.csv";
    importData(input_array, file_location);
    addTeamData(input_array);
}
void SQLManager::getExpansionDistance(){
    QStringList input_array;
    QString file_location = QDir::homePath() + "/CS1D_Baseball/resources/baseball info/Distance between expansion stadium.csv";
    importData(input_array, file_location);
    addDistanceData(input_array);
}
bool SQLManager::teamExists(QString teamName){
    bool exists = true;
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT team_name FROM mlb_info WHERE team_name = :teamName");
    checkQuery.bindValue(":teamName", teamName);
    if(checkQuery.exec()){
        exists = false;
    }
    return exists;
}
bool SQLManager::dataExists(QString oStadium, QString dStadium){
    bool exists = true;
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT originated_stadium, destination_stadium FROM distance_between_stadiums WHERE originated_stadium = :oStadium AND destination_stadium = :dStadium");
    checkQuery.bindValue(":oStadium", oStadium);
    checkQuery.bindValue(":dStadium", dStadium);
    if(checkQuery.exec()){
        exists = false;
    }
    return exists;
}
void SQLManager::addTeamData(QStringList &input_array){
    QString team_name;
    QString stadium_name;
    QString seating_capacity;
    QString location;
    QString playing_surface;
    QString league;
    QString date_opened;
    QString distance_to_center_field;
    QString ballpark_topology;
    QString roof_type;
    double seating_cap;
    for(int count = 10; count < input_array.size(); count +=10)
    {
        team_name = input_array.at(count);
        stadium_name = input_array.at(count + 1);
        seating_capacity = input_array.at(count + 2);
        location = input_array.at(count + 3);
        playing_surface = input_array.at(count + 4);
        league = input_array.at(count + 5);
        date_opened = input_array.at(count + 6);
        distance_to_center_field = input_array.at(count + 7);
        ballpark_topology = input_array.at(count + 8);
        roof_type = input_array.at(count + 9);
        seating_cap = seating_capacity.toDouble();

        if(!this->teamExists(team_name)){
            QSqlQuery query;
            query.prepare("REPLACE INTO 'mlb_info' ('team_name', 'stadium_name','seating_capacity','location','playing_surface','league',"
                          "'date_opened','distance_to_center_field','ballpark_topology','roof_type') "
                          "VALUES(:team_name, :stadium_name, :seating_capacity, :location, :playing_surface, :league, :date_opened, :distance_to_center_field, :ballpark_topology, :roof_type)");
            query.bindValue(":team_name", team_name);
            query.bindValue(":stadium_name", stadium_name);
            query.bindValue(":seating_capacity",seating_cap);
            query.bindValue(":location",location);
            query.bindValue(":playing_surface",playing_surface);
            query.bindValue(":league",league);
            query.bindValue(":date_opened",date_opened);
            query.bindValue(":distance_to_center_field",distance_to_center_field);
            query.bindValue(":ballpark_topology",ballpark_topology);
            query.bindValue(":roof_type",roof_type);
            query.exec();

            Souvenir cap = Souvenir(team_name, stadium_name, "Baseball cap" , 23.99);
            Souvenir ball = Souvenir(team_name, stadium_name, "Autographed baseball" , 29.99);
            Souvenir bat = Souvenir(team_name, stadium_name, "Baseball bat" , 79.39);
            Souvenir jersey = Souvenir(team_name, stadium_name, "Team Jersey" , 99.99);
            Souvenir pennant = Souvenir(team_name, stadium_name, "Team pennant" , 13.99);
            this->addSouvenir(cap);
            this->addSouvenir(ball);
            this->addSouvenir(bat);
            this->addSouvenir(jersey);
            this->addSouvenir(pennant);
        }

    }
}
void SQLManager::addDistanceData(QStringList &input_array){
    QString originated_stadium;
    QString destination_stadium;
    QString distance;

    for(int count = 3; count < input_array.size(); count +=3)
    {
        originated_stadium = input_array.at(count);
        destination_stadium = input_array.at(count + 1);
        distance = input_array.at(count + 2);


        if(!this->dataExists(originated_stadium, destination_stadium)){
            QSqlQuery query;
            query.prepare("INSERT INTO 'distance_between_stadiums'('originated_stadium', 'destination_stadium','distance') "
                          "VALUES(:originated_stadium, :destination_stadium, :distance)");

            query.bindValue(":originated_stadium", originated_stadium);
            query.bindValue(":destination_stadium", destination_stadium);
            query.bindValue(":distance",distance);

            query.exec();

            query.prepare("INSERT INTO 'distance_between_stadiums'('originated_stadium', 'destination_stadium','distance') "
                          "VALUES(:originated_stadium, :destination_stadium, :distance)");

            query.bindValue(":originated_stadium", destination_stadium);
            query.bindValue(":destination_stadium", originated_stadium);
            query.bindValue(":distance",distance);

            query.exec();
        }

    }

}

bool Graph::visitedListContains(Vertex* searchVertex, QList<Vertex*> list) {
    bool contains = false;

    for (auto vertex : list) {
        if (searchVertex->data.stadiumName == vertex->data.stadiumName) {
            contains = true;
        }
    }

    return contains;
}

void Graph::Dijkstras(Vertex* origin, QMap<Vertex*, int> &distances, int currCost)
{

    const int INF = 99999;
    QList<Vertex*> visitedList;

    for (int i=0; i < vertices.size(); i++) {
        if (vertices.at(i) == origin) {
            distances.insert(vertices.at(i), 0);
        } else {
            distances.insert(vertices.at(i), INF);
        }
    }

    Vertex* currVertex = origin;
    while (currVertex != NULL) {
        visitedList.push_back(currVertex);
        qDebug() << "Visting vertex:" << currVertex->data.stadiumName;
        qDebug() << "Visited list size: " << visitedList.size();
        qDebug() << "------------------------------";

        for (int j=0; j < currVertex->edges.size(); j++) {
            Edge* adjacentEdge = currVertex->edges.at(j);
            int totalCostFromOrigin = distances[currVertex] + adjacentEdge->weight;
            int knownDistance = distances.value(adjacentEdge->destination);

            if (knownDistance > totalCostFromOrigin) {
                qDebug() << "Current known distance from origin to" << adjacentEdge->destination->data.stadiumName << "is:" << knownDistance;
                qDebug() << "It is now: " << totalCostFromOrigin;
                distances[adjacentEdge->destination] = totalCostFromOrigin;
                adjacentEdge->destination->parent = currVertex; // Used to determine paths
            }
        }


        QList<int> distanceList = distances.values();
        std::sort(distanceList.begin(), distanceList.end());

        Vertex* nextClosest = NULL;

        if (!visitedListContains(distances.key(distanceList[1]), visitedList)) {
            nextClosest = distances.key(distanceList[1]);
        } else {
            int i = 1;
            for (auto distance : distanceList) {
                if (i < distanceList.size()) {
                    if (!visitedListContains(distances.key(distance), visitedList)) {
                        nextClosest = distances.key(distance);
                        break;
                    } else {
                        i++;
                    }
                }
            }
        }
        if (nextClosest != NULL) {
            //            qDebug() << "Next closest known and unvisited stadium:" << nextClosest->data.stadiumName;
            qDebug() << endl << endl;
        }
        currVertex = nextClosest;
    }
}

bool Graph::MSTEdgeListContains(QList<MSTEdge>& edgeList, Vertex* origin, Vertex* destination) {
    bool contains = false;

    for (auto MSTEdge : edgeList) {
        if ((MSTEdge.origin == origin && MSTEdge.destination == destination) || (MSTEdge.origin == destination && MSTEdge.destination == origin)) {
            contains = true;
        }
    }
    return contains;
}

void Graph::GenerateMST(QString& results)
{
    QList<Vertex*> vertices = this->GetAllVertices();
    QList<MSTEdge> edges;

    for (auto vertex : vertices) {
        for (auto edge : vertex->edges) {
            MSTEdge newEdge;

            newEdge.origin = vertex;
            newEdge.destination = edge->destination;
            newEdge.weight = edge->weight;

            if (!MSTEdgeListContains(edges, newEdge.origin, newEdge.destination)) {
                edges.push_back(newEdge);
            }
        }
    }
    std::sort(edges.begin(), edges.end());

    QList<Vertex*> visitedList;
    int totalDistance = 0;
    for (auto edge : edges) {
        if (!TripPlannerWindow::visitedListContains(visitedList, edge.destination) || !TripPlannerWindow::visitedListContains(visitedList, edge.origin)) {
            visitedList.push_back(edge.origin);
            visitedList.push_back(edge.destination);

            totalDistance += edge.weight;

            results += "(" + edge.origin->data.stadiumName + ", " + edge.destination->data.stadiumName + ") - " + QString::number(edge.weight) + "mi\n";

            qDebug() << "Edge from " << edge.origin->data.stadiumName << " to " << edge.destination->data.stadiumName << ", " << edge.weight << "mi";
        }
    }

    results += "\nTotal distance: " + QString::number(totalDistance);



}

void Graph::CalculateDFS(QString& results, Vertex *currVertex, QList<Vertex*>& visitedList, QList<int>& lastEdgeWeights, int& totalDistance, int backTrackNum)
{
    static int formatInt = 0;
    if (visitedList.size() == (this->GetAllVertices().size() -1) || currVertex == NULL) {
        if (currVertex == NULL) {
            qDebug() << "curr vertex = Null";
        }
        results += "Total distance traveled: " + QString::number(totalDistance);
        formatInt = 0;
        return;
    }

    if (!visitedListContains(currVertex, visitedList)) {
        visitedList.push_back(currVertex);
        qDebug() << "Added " << currVertex->data.stadiumName << " to visited list.";

    }
    qDebug() << "Visited list size: " << visitedList.size();
    qDebug() << "current vertex: " << currVertex->data.stadiumName;


    qDebug() << "distance traveled: " << totalDistance << endl;


    int     shortestEdgeWeight = 9999999;
    Edge*   shortestEdge       = NULL;

    for (auto edge : currVertex->edges) {
        qDebug() << "Checking if edge between " << currVertex->data.stadiumName << " and " << edge->destination->data.stadiumName << " has been visited";
        if (shortestEdgeWeight > edge->weight && !TripPlannerWindow::visitedListContains(visitedList, edge->destination)) {
            shortestEdgeWeight = edge->weight;
            shortestEdge = edge;
        }
    }
    if (shortestEdge == NULL) {
        int lastEdgeWeight = lastEdgeWeights.back();
        lastEdgeWeights.pop_back();

        // back track to the last visited vertice
        qDebug() << "Back tracking " << backTrackNum << " to: " << visitedList.at(visitedList.size() - (backTrackNum + 1))->data.stadiumName << " traveling " << lastEdgeWeight;
        qDebug() << "Total distance is now: " << totalDistance + lastEdgeWeight;
        totalDistance += lastEdgeWeight;

        Vertex* backTrackVertex = visitedList.at(visitedList.size() - (backTrackNum + 1));
        visitedList.removeAt(visitedList.size() - (backTrackNum + 1));

        CalculateDFS(results, backTrackVertex, visitedList, lastEdgeWeights, totalDistance, ++backTrackNum);
    } else {
        qDebug() << "Next closest: " << shortestEdge->destination->data.stadiumName;
        if (formatInt < 4) {
            results += shortestEdge->destination->data.stadiumName + ", ";
            formatInt++;
        } else {
            results += shortestEdge->destination->data.stadiumName + ",\n\n";
            formatInt = 0;
        }
        totalDistance += shortestEdge->weight;
        lastEdgeWeights.push_back(shortestEdge->weight);
        CalculateDFS(results, shortestEdge->destination, visitedList, lastEdgeWeights, totalDistance, 1);
    }


}

void Graph::CalculateBFS(Vertex *currVertex, int& totalDistance, QString& results)
{
    static int formatInt = 0;
    static QList<Vertex*> visitedList;
    static QQueue<Vertex*> vertexQueue;

    if (visitedList.size() == this->GetAllVertices().size()) {
        for (auto leftOver : vertexQueue) {
            if (formatInt < 4) {
                results += leftOver->data.stadiumName + ", ";
                formatInt++;
            } else {
                results += leftOver->data.stadiumName + "\n";
                formatInt = 0;
            }
        }
        visitedList.clear();
        vertexQueue.clear();
        results += "\n\nTotal distance traveled: " + QString::number(totalDistance);
        return;
    }

    QList<Edge*> edgeList = currVertex->edges;
    qDebug() << "\nCurrent vertex: " << currVertex->data.stadiumName;
    qDebug() << "distance traveled: " << totalDistance;

    std::sort(edgeList.begin(), edgeList.end(), EdgeComparer());


    for (auto edge : edgeList) {
        if (!TripPlannerWindow::visitedListContains(visitedList, edge->destination)) {
            qDebug() << "Unvisited adjacent edge enqueued: " << edge->destination->data.stadiumName;
            vertexQueue.push_back(edge->destination);
            visitedList.push_back(edge->destination);
            edge->destination->parentToChildDist = edge->weight;
        }
    }

    qDebug() << "Next closest: " << vertexQueue.front()->data.stadiumName;

    if (formatInt < 4) {
        results += vertexQueue.front()->data.stadiumName + ", ";
        formatInt++;
    } else {
        results += vertexQueue.front()->data.stadiumName + "\n\n";
        formatInt = 0;
    }

    if (!TripPlannerWindow::visitedListContains(visitedList, currVertex)) {
        visitedList.push_back(currVertex);
    }

    totalDistance += vertexQueue.front()->parentToChildDist;

    CalculateBFS(vertexQueue.takeFirst(), totalDistance, results);
}

















