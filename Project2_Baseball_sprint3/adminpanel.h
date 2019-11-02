#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QWidget>
#include <QDialog>
#include <QRegExp>
#include "sqlmanager.h"
#include "teamtablemodel.h"
#include "sqlmanager.h"
#include "mainmenu.h"
#include "souvenirtable.h"
#include "stadiumtable.h"
#include "addsouvenir.h"
#include "deletesouvenir.h"
/** \class AdminPanel
 * Class to modify the stadium and souvenir data of a team
 * Class also contains import feature, traversals feature, add and delete
 * souvenir feature, modify souvenir and stadium features
 */
namespace Ui {
class AdminPanel;
}

class AdminPanel : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = 0); ///Constructor
    ~AdminPanel(); ///Destructor

    void popStadium(); ///Populates stadium data to the QTableView
    void popSouvenir(); ///Populates Souvenir data to the QTableView

    void populateGraph(); ///Populates Graph data
private slots:
    void popList(); ///Populates the Team name list
    void on_TeamBox_currentIndexChanged(); /// Adjusts the filter to match the index

    void on_StadiumRadio_clicked(); /// Changes QTableView to stadium data

    void on_SouvenirRadio_clicked(); ///Changes QTableView to souvenir data

    void on_ModifyStadiumButton_clicked(); /// Opens Modify Stadium View

    void on_pushButton_3_clicked(); /// Closes this UI element

    void refresh(); ///Refreashs QTableView

    void on_ModifySouvenirButton_clicked(); ///Opens modify Souvenir View

    void on_pushButton_clicked(); /// Opens add souvenir UI

    void on_pushButton_2_clicked(); /// Opens Delete souvenir UI

    void on_ImportButton_clicked(); ///Imports new team data and distance data

    void on_viewMSTButton_clicked(); /// Displays MST information

    void on_calcDFSFromTargetButon_clicked(); /// Displays DFS information

    void on_graphTraversalsButton_clicked(); /// Adjusts view to traversals page

    void on_calculateBFSButton_clicked(); /// Displays BFS information

    void on_backButton_clicked(); /// Returns to Admin panel view

private:
    Ui::AdminPanel *ui; /// Pointer to this UI element
    QList<Team> tName; ///List of team data
    QList<Stadium> stadiumInfo; /// List of stadium data
    QList<Souvenir> souvenirInfo; /// List of souvenir data
    QSortFilterProxyModel* proxyModel; /// Table view proxy model
    QList<QString> teams; /// List of team names
    Graph*         graph;  // for MST, BFS, DFS
};

#endif // ADMINPANEL_H
