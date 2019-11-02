#ifndef MODIFYSTADIUM_H
#define MODIFYSTADIUM_H

#include <QDialog>
#include "teamtablemodel.h"
#include "sqlmanager.h"
#include "adminpanel.h"
#include <QTableView>
/** \class ModifyStadium
 * Class for modifying Stadium data from the DB
 */
namespace Ui {
class ModifyStadium;
}

class ModifyStadium : public QDialog
{
    Q_OBJECT

public:
    ModifyStadium(Team inTeam, QTableView* view, QWidget *parent = 0); /// Constructor
    ~ModifyStadium(); ///Destructor
    void genListData(); /// Generates lists for the UI

private slots:
    void on_pushButton_2_clicked(); /// Closes this UI

    void on_Modify_Button_clicked(); /// Calls to SQL database to modify stadium data

private:
    Ui::ModifyStadium *ui; /// Pointer to this UI element
    QTableView*    view; /// Pointer to a TableView
    QList<QString> surfaceList; /// List of surfaces
    QList<QString> leagueList; ///List of leagues
    QList<QString> topList; ///List of topologys
    QList<QString> roofList; ///List of roof types
};

#endif // MODIFYSTADIUM_H
