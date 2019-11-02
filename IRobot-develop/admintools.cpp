#include "addmember.h"
#include "admintools.h"
#include "deletemember.h"
#include "editcustomer.h"
#include "ui_admintools.h"

adminTools::adminTools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminTools)
{
    this->setWindowFlag(Qt::FramelessWindowHint, true);
    ui->setupUi(this);
    prev = parent;
}

adminTools::~adminTools()
{
    delete ui;
    delete prev;
}

QStandardItemModel *adminTools::currentCustomerToQTableView(QVector<curCustomer> customers)
{
    bubbleSort(customers);

    QStandardItemModel *table = new QStandardItemModel(customers.size(), 2);
    QList<QString> list;
    list.push_back("Name");
    list.push_back("Interest");
    table->setHorizontalHeaderLabels(list);

    for(int i = 0; i < customers.size(); i++){
        QString s[2] = {
            customers.at(i).cName,
            customers.at(i).cInterest
        };
        table->setItem(i, 0, new QStandardItem(s[0]));
        table->setItem(i, 1, new QStandardItem(s[1]));
    }
    return table;
}

QStandardItemModel *adminTools::currentCustomerToQTableViewWithKeyStatus(QVector<curCustomer> customers)
{
    bubbleSort(customers);
    QStandardItemModel *table = new QStandardItemModel(customers.size(), 2);

    QList<QString> list;
    list.push_back("Name");
    list.push_back("Priority");
    table->setHorizontalHeaderLabels(list);
    for(int i = 0; i < customers.size(); i++){
        QString s[2] = {
            customers.at(i).cName,
            customers.at(i).cPriority
        };
        table->setItem(i, 0, new QStandardItem(s[0]));
        table->setItem(i, 1, new QStandardItem(s[1]));
    }
    return table;
}

void adminTools::setCurrentCustomers(QVector<curCustomer> customers)
{
    this->currentCustomers = customers;
}

void adminTools::on_listCustomers_clicked()
{
    ui->tableView->setModel(currentCustomerToQTableView(this->currentCustomers));
    resizeTableView();
}

void adminTools::resizeTableView(){
    for(int i = 0; i < ui->tableView->horizontalHeader()->count(); i++){
        ui->tableView->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }
}

void adminTools::replaceCustomer(curCustomer c, int i)
{
    this->dm->replaceCustomer(c, i);
    currentCustomers[i] = c;
}

bool adminTools::deleteCustomerFromDb(curCustomer customer)
{
    return this->dm->deleteCustomerFromDb(customer);
}

void adminTools::bubbleSort(QVector<curCustomer> &sortedCustomers){
    for(int i = 0; i < sortedCustomers.size()-1; i++) {
        for(int j = 0; j < sortedCustomers.size()-i-1; j++){
            if(sortedCustomers.at(j).cName.toLower() > sortedCustomers.at(j+1).cName.toLower()){
                curCustomer c = sortedCustomers.at(j);
                sortedCustomers[j] = sortedCustomers.at(j+1);
                sortedCustomers[j+1] = c;
            }
        }

    }
}

void adminTools::on_listKeyCustomers_clicked()
{
    QVector<curCustomer> keyCustomers;
    for(int i = 0; i < currentCustomers.size(); i++){
        if(currentCustomers.at(i).cPriority.toLower() == "key"){
            keyCustomers.append(currentCustomers.at(i));
        }
    }

    bubbleSort(keyCustomers);

    ui->tableView->setModel(currentCustomerToQTableViewWithKeyStatus(keyCustomers));

    resizeTableView();

}

void adminTools::on_listCustomerOrders_clicked()
{
    ui->tableView->setModel(customersWithPurchasesToQTableView());

    resizeTableView();
}

QStandardItemModel *adminTools::customersWithPurchasesToQTableView(){
    int i = 0;
    int j = 0;
    int count = 0;
    for(i = 0; i < currentCustomers.size(); i++){
        for(j = 0; j < purchases.size(); j++){
            if(currentCustomers.at(i).cName.toLower() == purchases.at(j).cName.toLower()){
                    count++;
            }
        }
    }
    QStandardItemModel *table = new QStandardItemModel(count, 3);
    QList<QString> list;
    list.push_back("Customer");
    list.push_back("Product");
    list.push_back("Total Cost");
    table->setHorizontalHeaderLabels(list);
    bubbleSort(currentCustomers);
    i = 0;
    j = 0;
    count = 0;
    for(i = 0; i < currentCustomers.size(); i++){
        for(j = 0; j < purchases.size(); j++){
            if(currentCustomers.at(i).cName.toLower() == purchases.at(j).cName.toLower()){
                table->setItem(count,0,new QStandardItem(currentCustomers.at(i).cName));
                table->setItem(count,1,new QStandardItem(purchases.at(j).pProduct));
                table->setItem(count,2,new QStandardItem(QString::number(purchases.at(j).total_Cost) + ".00"));
                count++;
            }
        }
    }
    return table;
}

void adminTools::addCustomerToVectorAndDataManager(curCustomer &customer)
{
    currentCustomers.push_back(customer);
    dm->addCustomerToCurrentCustomers(customer);
}

void adminTools::setPurchases(const QVector<Purchases> &value)
{
    purchases = value;
}

void adminTools::on_addMember_clicked()
{
   addmember *adder = new addmember(this);
   adder->setATools(this);
   this->hide();
   adder->show();
   //this->show();
}

QVector<curCustomer> adminTools::getCurrentCustomers() const
{
    return dm->getCurrentCustomers();
}

void adminTools::setDm(DataManager *value)
{
    dm = value;
}

void adminTools::deleteCustomer(int idx)
{
    this->dm->deleteCustomer(idx);
    currentCustomers.erase(currentCustomers.begin()+idx);
}

void adminTools::on_deleteMember_clicked()
{
    deletemember *delmem = new deletemember(this);
    this->hide();
    delmem->setATools(this);
    delmem->exec();
}

void adminTools::on_exit_clicked()
{
    this->reject();
    prev->show();
}

void adminTools::on_editCustomer_clicked()
{
    EditCustomer *edit = new EditCustomer(this);
    this->hide();
    edit->setATools(this);
    edit->exec();
}

bool adminTools::addCustomerViaDb(curCustomer customer)
{
    return this->dm->addCustomerViaDb(customer);

}
