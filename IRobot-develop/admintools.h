#ifndef ADMINTOOLS_H
#define ADMINTOOLS_H

#include "datamanager.h"
#include "sqlmanager.h"
#include <iostream>
#include <QDialog>
#include <QStandardItemModel>
#include <QtAlgorithms>
#include <utility>

namespace Ui {
class adminTools;
}

class adminTools : public QDialog
{
    Q_OBJECT

public:
    /// constructor
    explicit adminTools(QWidget *parent = 0);

    /// destructor
    ~adminTools();

    /// vector to QTableView
    QStandardItemModel *currentCustomerToQTableView(QVector<curCustomer> customers);

    /// populates the customer vector
    void setCurrentCustomers(QVector<curCustomer> customers);

    /// sorts alphabetically by first name
    void bubbleSort(QVector<curCustomer> &vector);

    /// vector to QTableView
    QStandardItemModel *currentCustomerToQTableViewWithKeyStatus(QVector<curCustomer> customers);

    /// set the purchases vector
    void setPurchases(const QVector<Purchases> &value);

    /// vector to QTableView
    QStandardItemModel *customersWithPurchasesToQTableView();

    /// add customer this customer vector and to datamanager vector
    void addCustomerToVectorAndDataManager(curCustomer &customer);

    /// populate data manager
    void setDm(DataManager *value);

    /// delete all occurences of customer at index
    void deleteCustomer(int idx);

    /// returns a copy of customers
    QVector<curCustomer> getCurrentCustomers() const;

    /// resizes tableView
    void resizeTableView();

    /// replaces customer at index with customer c
    void replaceCustomer(curCustomer c, int i);

    /// add customer to database
    bool addCustomerViaDb(curCustomer customer);

    /// removes customer from database
    bool deleteCustomerFromDb(curCustomer customer);

private slots:

    /// lists  alphabetically
    void on_listCustomers_clicked();

    /// lists customers with priority = key
    void on_listKeyCustomers_clicked();

    /// list customers with their purchases
    void on_listCustomerOrders_clicked();

    /// create a window to add member
    void on_addMember_clicked();

    /// create a window to delete a member
    void on_deleteMember_clicked();

    /// cancels any actions. shows previous
    void on_exit_clicked();

    /// opens window to edit customer
    void on_editCustomer_clicked();

private:
    QWidget *prev;
    Ui::adminTools *ui;
    DataManager *dm;
    QVector<curCustomer> currentCustomers;
    QVector<Purchases> purchases;
};

#endif // ADMINTOOLS_H
