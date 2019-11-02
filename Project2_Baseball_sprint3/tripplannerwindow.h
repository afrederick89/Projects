#ifndef TRIPPLANNERWINDOW_H
#define TRIPPLANNERWINDOW_H

#include <QWidget>
#include <QStringListModel>
#include "sqlmanager.h"
#include <QList>
#include <QDebug>

namespace Ui {
class TripPlannerWindow;
}

struct CartItem {
    explicit CartItem(Souvenir item, Team team) {
        this->item = Souvenir(item.teamName, item.stadiumName, item.itemName, item.itemCost);
        this->stadiumPurchasedAt = team;
    }
    Souvenir item;
    Team     stadiumPurchasedAt;
};

class TripPlannerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TripPlannerWindow(QWidget *parent = 0);
    ~TripPlannerWindow();

    void populateGraph();
    static bool stadiumListContainsStadium(Team stadium, QList<Team> list);
    void determineDijkstraPath(Vertex *origin, Vertex *destination, QList<Vertex*>& path);

    void populateStadiumInfo(Vertex *vertex);
    void updateShoppingCart(CartItem newCartItem);
    bool teamsToVisitListContains(Team teamToAdd);
    void populateCustomTripIteration(Team teamToVisit);
    static bool visitedListContains(QList<Vertex *> visitedList, Vertex *vertex);
    void VisitAllMostEfficiently(Vertex *currVertex, QList<Vertex *>& visitedList, int aggregatedDistanceTraveled = 0, int backTrackNum = 0);

    void populateMostEfficientFromComerica(Team teamToVisit);

    bool orderedListContains(QList<Team> list, Team searchTeam);
    void VisitCustomMostEfficiently(Vertex *currVertex, QList<Vertex *> &visitedList, int aggregatedDistanceTraveled);
private slots:
    void on_startingStadiumComboBox_currentIndexChanged(int index);
    void on_beginTripButton_clicked();

    void on_mostEfficientTripButton_clicked();

    void on_souvenirsListView_doubleClicked(const QModelIndex &index);

    void on_shoppingCartListView_doubleClicked(const QModelIndex &index);

    void on_takeTripButton_clicked();

    void on_customTripButton_clicked();

    void on_addTeamButton_clicked();

    void on_beginCustomTripButton_clicked();

    void on_backButton2_clicked();

    void on_backButton_clicked();

    void on_pushButton_clicked();

    void on_abortButton_clicked();

    void on_backButton_2_clicked();

    void on_visitAllTeamsMostEfficiently_clicked();

    void on_customMostEfficientTripButton_clicked();


private:
    Ui::TripPlannerWindow*   ui;
    QList<Team>              teams;

    double                   totalDistanceTraveled; // the total distance traveled at any point along the trip
    // Dijkstras stuff/graph stuff
    Team                     originStadium;     // Wherever the user chooses to start their trip at
    Graph*                   graph;             // The graph that will be used when a user takes a trip
    QList<Vertex*>           tripPathQueue;
    Vertex*                  destination;
    bool                     dijkstrasShortestPath;

    // Custom trip stuff
    QList<Team>              teamsToVisit;
    QList<Team>              orderedTeamsToVisit; // array of teams to visit in user defined order by draggable listView :D
    QList<int>               aggregatedTripDistances;
    bool                     mostEfficientlyVisitAll;
    // Shopping cart
    QList<Souvenir>          currentTeamSouvenirList;
    QList<CartItem>          shoppingCart;

};





#endif // TRIPPLANNERWINDOW_H
