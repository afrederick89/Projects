#ifndef SQLMANAGER_H
#define SQLMANAGER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QSortFilterProxyModel>
#include <QStandardItemModel>
#include <QList>
#include <QFile>
#include <QRegularExpression>
#include "teamtablemodel.h"
#include "souvenirtable.h"


struct Edge;

class Vertex {

public:
    int          ID;
    Team         data;  // Although the type is 'Team' it's basically a stadium...
    QList<Edge*> edges;
    Vertex*      parent; // Used for determining shortest paths from a completed dijkstra's distance table
    int          parentToChildDist; // used for BFS distance accumulator

    Vertex() { this->parent = NULL; parentToChildDist = 0;}
    Vertex(Team stadium, QList<Edge*> edges) {
        this->data  = stadium;
        this->edges = edges;
        this->parent = NULL;
        parentToChildDist = 0;
    }
    bool operator <(const Vertex& other) const {
        return ID < other.ID;
    }
    bool operator==(const Vertex& other) const {
        return this->data.stadiumName == other.data.stadiumName;
    }
};

struct MSTEdge {
    Vertex* origin;
    Vertex* destination;
    int     weight;

    bool operator<(const MSTEdge& other) const {
        return this->weight < other.weight;
    }
};

struct Edge {
    Edge(Vertex* destination, int weight) {
        this->destination = destination;
        this->weight = weight;
    }
    Vertex* destination;
    int weight;

};
class EdgeComparer {

public:

    bool operator() ( const Edge *lhs, const Edge *rhs) {

        return (*lhs).weight < (*rhs).weight;

    }

};

class Graph
{
private:
    QList<Vertex*> vertices;

public:
    Graph(QList<Vertex*> vertexList) { this->vertices = vertexList; }
    Graph() { this->vertices = QList<Vertex*>(); }

    void Dijkstras(Vertex* origin, QMap<Vertex*, int>& distances, int currCost = 0);

    void GenerateMST(QString &results); // kruskal's
    void CalculateDFS(QString& results, Vertex* currVertex, QList<Vertex*>& visitedList, QList<int>& lastEdgeWeights, int& totalDistance, int backTrackNum = 1);

    QList<Vertex*> GetAllVertices() {
        return this->vertices;
    }

    Vertex* getVertexByStadiumName(QString stadiumName) {

        Vertex* returnVertex = NULL;
        for (auto vertex : vertices) {
            if (stadiumName == vertex->data.stadiumName) {
                returnVertex = vertex;
            }
        }
        return returnVertex;
    }

    Vertex* getVertexByTeamName(QString teamName) {

        Vertex* returnVertex = NULL;
        for (auto vertex : vertices) {
            if (teamName == vertex->data.teamName) {
                returnVertex = vertex;
            }
        }
        return returnVertex;
    }
    bool visitedListContains(Vertex *searchVertex, QList<Vertex *> list);
    bool MSTEdgeListContains(QList<MSTEdge>& edgeList, Vertex* origin, Vertex* destination);
    void CalculateBFS(Vertex *currVertex, int& totalDistance, QString& results);
    bool cmpEdge(const Edge *other);
};





class SQLManager
{
private:
    SQLManager();
    static SQLManager* managerInstance;
    QSqlDatabase DBInstance;

public:
    // Used to get an instance to the SQLManager class (only one exists in memory at any instant of runtime)
    static SQLManager* getInstance();

    bool authenticateAdminLoginRequest(QString username, QString passsword);
    bool modifyStadiumInfo(Team inTeam);
    bool modifySouvenirInfo(Souvenir inSouve);
    bool addSouvenir(Souvenir inS);
    bool delSouvenir(Souvenir delS);
    void importData(QStringList &input_array, QString input_file_location);
    void getExpansionData();
    void getExpansionDistance();
    void addTeamData(QStringList &input_array);
    void addDistanceData(QStringList &input_array);
    bool teamExists(QString teamName);
    bool dataExists(QString oStadium, QString dStadium);

    // Returns a QList of all the teams and their corresponding attributes.
    QList<Team>     getAllTeams();
    Team            getTeamByName(QString stadiumName);
    QList<Souvenir> getAllSouvenirs();
    QList<Team>     getAdjacentStadiums(Vertex* originStadium);
    int getWeightBetween(Vertex *A, Vertex *B);
    Team getStadiumByName(QString teamName);
    QList<Souvenir> getSouvenirsByStadium(QString stadiumName);
    QList<Team> getMaxMinDistanceToCF(bool max = true);
};


#endif // SQLMANAGER_H
