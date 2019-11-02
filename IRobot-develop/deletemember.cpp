#include "customernotfound.h"
#include "deletemember.h"
#include "ui_deletemember.h"
#include <cassert>

//#define TEST_MODE

deletemember::deletemember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletemember)
{
    this->setWindowFlag(Qt::FramelessWindowHint, true);
    ui->setupUi(this);
    prev = parent;
}


deletemember::~deletemember()
{
    delete ui;
}

void deletemember::setATools(adminTools *value)
{

    aTools = value;
}

void deletemember::on_exit_clicked()
{
    this->reject();
    prev->show();
}

void deletemember::on_accept_clicked()
{
#ifndef TEST_MODE
    runAcceptClickedAsNormal();
#else
    runAcceptClickedAsTest();
#endif
}

void deletemember::runAcceptClickedAsNormal(){
    QString cName = ui->nameLineEdit->text();
    bool found = false;
    int i = 0;
    QVector<curCustomer> customers = this->aTools->getCurrentCustomers();
    for(i = 0; i < customers.size(); i++){
        if(cName.toLower() == customers.at(i).cName.toLower()){
            found = true;
            break;
        }
    }
    if(!found){
        customernotfound *notFound = new customernotfound();
        this->hide();
        notFound->exec();
        this->reject();
        prev->show();
    } else {
        this->aTools->deleteCustomer(i);
        this->aTools->deleteCustomerFromDb(customers.at(i));
    }
    this->reject();
    prev->show();
}

void deletemember::runAcceptClickedAsTest(){
    qDebug() << "Running accept clicked tests.\n";
    QString cName = ui->nameLineEdit->text();
    bool found = false;
    int i = 0;
    QVector<curCustomer> customers = this->aTools->getCurrentCustomers();
    for(i = 0; i < customers.size(); i++){
        if(cName.toLower() == customers.at(i).cName.toLower()){
            found = true;
            break;
        }
    }
    if(!found){
        customernotfound *notFound = new customernotfound();
        this->hide();
        notFound->exec();
        this->reject();
        prev->show();
    } else {
        this->aTools->deleteCustomer(i);
        this->aTools->deleteCustomerFromDb(customers.at(i));
    }

    customers = aTools->getCurrentCustomers();
    // loops to ensure the previous name is not contained
    for(int i = 0; i < customers.size(); i++){
        assert(cName != customers.at(i).cName);
    }
    qDebug() << "Assertions passed.\n";
    this->reject();
    prev->show();
}
