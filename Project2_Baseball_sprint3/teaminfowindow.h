#ifndef TEAMINFOWINDOW_H
#define TEAMINFOWINDOW_H

#include <QDialog>
#include <QRegExp>
#include "sqlmanager.h"
#include "teamtablemodel.h"
#include "sqlmanager.h"
#include "mainmenu.h"

namespace Ui {
class TeamInfoWindow;
}

class TeamInfoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TeamInfoWindow(QWidget *parent = 0);
    ~TeamInfoWindow();

    void populateTableView();
private slots:
    void on_filterByAmerican_clicked();

    void on_backToMenuButton_clicked();

    void on_filterByNationals_clicked();

    void on_sortByTeamNameInput_textChanged(const QString &arg1);

    void on_noFilter_clicked();

    void on_filterByTopology_clicked();

    void on_filterByOpenRoofType_clicked();

    void on_filterByDateOpened_clicked();

    void on_filterByCapacity_clicked();

    void on_filterByDistanceToCF_clicked();

    void on_filterMaxMin_clicked();

private:
    Ui::TeamInfoWindow *ui;
    QSortFilterProxyModel* proxyModel;
    QByteArray defaultTableState;
    // should be updated any time a change is made to database
    QList<Team> teamList;
};

#endif // TEAMINFOWINDOW_H
