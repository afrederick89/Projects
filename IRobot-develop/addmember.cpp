#include "addmember.h"
#include "invalidaddcustomername.h"
#include "sqlmanager.h"
#include "ui_addmember.h"
#include "cassert"
#include "duplicatecustomererrorwindow.h"
//#define TEST_MODE

addmember::addmember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addmember)
{
    this->setWindowFlag(Qt::FramelessWindowHint, true);
    ui->setupUi(this);
    prev = parent;
}

addmember::~addmember()
{
   delete ui;
    delete prev;
}


void addmember::on_exit_clicked()
{
    this->reject();
    prev->show();
}

void addmember::on_accept_clicked()
{
#ifdef TEST_MODE
    executeOnAcceptClickedAsTest();
#else
    executeOnAcceptClickedAsNormal();
#endif
}


void addmember::setATools(adminTools *value)
{
    aTools = value;
}

void addmember::executeOnAcceptClickedAsNormal()
{
    curCustomer customer;
    customer.cName = ui->nameLineEdit->text();

    QVector<curCustomer> customers = aTools->getCurrentCustomers();
    for(int i = 0; i < customers.size(); i++){
        if(customer.cName == customers.at(i).cName){
            DuplicateCustomerErrorWindow *error = new DuplicateCustomerErrorWindow();
            this->hide();
            error->exec();
            this->reject();
            prev->show();
            return;
        }
    }

    // setting cInterest
    if(ui->notInterestedRadioButton->isChecked()){
        customer.cInterest = "Not Interested";
    } else if (ui->somewhatInterestedRadioButton->isChecked()){
        customer.cInterest = "Somewhat Interested";
    } else if (ui->veryInterestedRadioButton->isChecked()){
        customer.cInterest = "Very Interested";
    } else {

    }

    customer.cAddress = ui->addressLineEdit->text();

    // setting cPriority
    if(ui->keyToHaveRadioButton->isChecked()){
        customer.cPriority = "Key";
    } else if (ui->niceToHaveRadioButton->isChecked()) {
        customer.cPriority = "Nice to Have";
    } else {

    }
    if(customer.cName.length() == 0){
        InvalidAddCustomerName *invalid = new InvalidAddCustomerName();
        this->hide();
        invalid->exec();
        this->reject();
        prev->show();
        return;
    }
    aTools->addCustomerToVectorAndDataManager(customer);
    assert(aTools->addCustomerViaDb(customer));
    this->reject();
    prev->show();
}

void addmember::executeOnAcceptClickedAsTest()
{
    qDebug() << "Beginning test on add_Member_Clicked. If any mapping fails program will abort via assertions.\n";
    curCustomer customer;
    customer.cName = ui->nameLineEdit->text();
    QVector<curCustomer> customers = aTools->getCurrentCustomers();
    for(int i = 0; i < customers.size(); i++){
        if(customer.cName == customers.at(i).cName){
            DuplicateCustomerErrorWindow *error = new DuplicateCustomerErrorWindow();
            this->hide();
            error->exec();
            this->reject();
            prev->show();
            return;
        }
    }

    // setting cInterest
    bool interestChanged = false;
    QString originalInterest = customer.cInterest;
    if(ui->notInterestedRadioButton->isChecked()){
        customer.cInterest = "Not Interested";
    } else if (ui->somewhatInterestedRadioButton->isChecked()){
        customer.cInterest = "Somewhat Interested";
    } else if (ui->veryInterestedRadioButton->isChecked()){
        customer.cInterest = "Very Interested";
    } else {

    }

    QString originalAddress = customer.cAddress;
    bool addressChanged = false;
    customer.cAddress = ui->addressLineEdit->text();
    if(customer.cAddress != originalAddress){
        addressChanged = true;
    }

    // setting cPriority
    bool priorityChanged = false;
    QString originalPriority = customer.cPriority;
    if(ui->keyToHaveRadioButton->isChecked()){
        customer.cPriority = "Key";
    } else if (ui->niceToHaveRadioButton->isChecked()) {
        customer.cPriority = "Nice to Have";
    } else {

    }
    if(customer.cName.length() == 0){
        InvalidAddCustomerName *invalid = new InvalidAddCustomerName();
        this->hide();
        invalid->exec();
        this->reject();
        prev->show();
        return;
    }
    aTools->addCustomerToVectorAndDataManager(customer);
    if(priorityChanged){
        assert(originalPriority != customer.cPriority);
    }
    if(interestChanged){
        assert(originalInterest != customer.cInterest);
    }
    if(addressChanged){
        assert(originalAddress != customer.cAddress);
    }
    assert(aTools->addCustomerViaDb(customer));

    qDebug() << "Asserations passed. Values mapped correctly.\n";
    this->reject();
    prev->show();
}
