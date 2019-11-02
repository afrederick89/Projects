#ifndef CUSTOMERTOOLS_H
#define CUSTOMERTOOLS_H

#include <QDialog>
#include <datamanager.h>
#include <p_table.h>
/** \class CustomerTools
 * CustomerTools class - Allows validated customers to place orders and view their previous purchases
 */
namespace Ui {
class customerTools;
}

class customerTools : public QDialog
{
    Q_OBJECT

public:
    explicit customerTools(DataManager *inDM, QString inUser, QWidget *parent = 0); ///Constructor with username and data access
    ~customerTools();
    void SetUserOnlyData(); ///Sets the purchase list to only ones the user made
    void resetTable(); ///Resets tables in view

private slots:
    void on_Place_Order_clicked(); ///Sends order request to datamanager
    void on_Exit_button_clicked(); ///Exits the customer tools menu
    void on_SubmitButton_clicked(); ///Sends the Review to the datamanager

private:
    Ui::customerTools *ui;
    DataManager *DM; ///Data access point
    P_Table *Table; ///Purchases table in view
    QString user; ///customers validated username
    QVector<Purchases> P_Data; ///Vector of purchases from DB
    QWidget *prev; ///Previous window
    QSortFilterProxyModel *Proxy; ///Proxy model for sorting

};

#endif // CUSTOMERTOOLS_H
