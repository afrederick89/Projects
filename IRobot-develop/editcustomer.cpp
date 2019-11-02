#include "customernotfound.h"
#include "editcustomer.h"
#include "ui_editcustomer.h"
#include "cassert"
//#define TEST_MODE

EditCustomer::EditCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditCustomer)
{
    this->setWindowFlag(Qt::FramelessWindowHint, true);
    ui->setupUi(this);
    prev = parent;
}

EditCustomer::~EditCustomer()
{
    delete ui;
}

void EditCustomer::setATools(adminTools *value)
{
    aTools = value;
}

void EditCustomer::on_cancelPushButton_clicked()
{
    this->reject();
    prev->show();
}

void EditCustomer::on_acceptPushButton_clicked()
{
#ifndef TEST_MODE
    executeOnAcceptClickedAsNormal();
#else
    executeOnAcceptClickedAsTest();
#endif
}

void EditCustomer::executeOnAcceptClickedAsNormal(){
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
        // edit customer
        // erase original customers at i and replace with new customer
        curCustomer customer;
        customer.cName = customers.at(i).cName;
        customer.cAddress = ui->addressLineEdit->text();

        // setting cInterest
        if(ui->notInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Not Interested";
        } else if (ui->somewhatInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Somewhat Interested";
        } else if (ui->veryInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Very Interested";
        } else {
            customer.cInterest = customers.at(i).cInterest;
        }

        // setting cPriority
        if(ui->keyToHaveRadioButton_2->isChecked()){
            customer.cPriority = "Key";
        } else if(ui->niceToHaveRadioButton_2->isChecked()) {
            customer.cPriority = "Nice to Have";
        } else {
            customer.cPriority = customers.at(i).cPriority;
        }

        aTools->replaceCustomer(customer, i);
        aTools->deleteCustomerFromDb(customer);
        aTools->addCustomerViaDb(customer);
        this->reject();
        prev->show();
    }
}

void EditCustomer::executeOnAcceptClickedAsTest()
{
    qDebug() << "Begin editCustomer tests.\n";
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
        curCustomer customer;
        customer.cName = customers.at(i).cName;
        customer.cAddress = ui->addressLineEdit->text();

        // setting cInterest

        bool interestChanged = false;
        QString originalInterest = customers.at(i).cInterest;
        if(ui->notInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Not Interested";
            interestChanged = true;
        } else if (ui->somewhatInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Somewhat Interested";
            interestChanged = true;
        } else if (ui->veryInterestedRadioButton_2->isChecked()){
            customer.cInterest = "Very Interested";
            interestChanged = true;
        } else {
            customer.cInterest = customers.at(i).cInterest;
        }

        // setting cPriority
        bool priorityChanged = false;
        QString originalPriority = customers.at(i).cPriority;
        if(ui->keyToHaveRadioButton_2->isChecked()){
            customer.cPriority = "Key";
            priorityChanged = true;
        } else if(ui->niceToHaveRadioButton_2->isChecked()) {
            customer.cPriority = "Nice to Have";
            priorityChanged = true;
        } else {
            customer.cPriority = customers.at(i).cPriority;
        }

        assert(customer.cName == customers.at(i).cName);
        assert(customer.cAddress != customers.at(i).cName);
        assert(customer.cAddress != "");
        if(interestChanged){
            assert(customer.cInterest != customers.at(i).cInterest);
        }
        if(priorityChanged){
            assert(customer.cPriority != customers.at(i).cName);
        }

        aTools->replaceCustomer(customer, i);
        aTools->deleteCustomerFromDb(customer);
        aTools->addCustomerViaDb(customer);
        qDebug() << "Assertions passed. No issues detected\n";
        this->reject();
        prev->show();
    }
}
