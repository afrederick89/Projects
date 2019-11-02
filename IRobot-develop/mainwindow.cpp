#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "invalidentry.h"
#include "purchaseorder.h"
#include "admintools.h"
#include "pamphlet.h"
#include <customertools.h>
#include <cassert>

MainWindow::MainWindow(DataManager *inDM, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    DM = inDM;
    DM->returnReviews(MWReviews);
    ui->setupUi(this);
    setTestimonials();
    ui->tabWidget->setCurrentIndex(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}

QVector<curCustomer> MainWindow::getDatamanagerCurrentCustomers()
{
    return DM->getCurrentCustomers();
}

QVector<Purchases> MainWindow::getDataManagerPurchases()
{
    return DM->getPurchases();
}

void MainWindow::on_CustomerLogin_Button_clicked()
{
    QString username, password;
    bool success;
    InvalidEntry invalid;
    customerTools *customerMenu;
    username = ui->CustUN->text();
    password = ui->CustPW->text();

    success = DM->validateCustomer(username, password);
    if(success) {
      customerMenu = new customerTools(DM, username, this);
      this->hide();
      customerMenu->show();
      ui->CustPW->clear();
      ui->CustUN->clear();
    } else {
      invalid.exec();
    }
}

void MainWindow::on_AdminLogin_Button_clicked()
{
    QString username, password;
    bool success;
    InvalidEntry invalid;
    username = ui->AdminUN->text();
    password = ui->AdminPW->text();

    success = DM->validateAdmin(username, password);
    if(success){
        adminTools *aTools = new adminTools(this);
        aTools->setCurrentCustomers(this->getDatamanagerCurrentCustomers());
        aTools->setPurchases(this->getDataManagerPurchases());
        aTools->setDm(getDM());
        this->hide();
        aTools->show();
        ui->AdminPW->clear();
        ui->AdminUN->clear();

    } else {
      invalid.exec();
    }
}

DataManager *MainWindow::getDM() const
{
    return DM;
}

void MainWindow::setDM(DataManager *value)
{
    DM = value;
}
  
void MainWindow::setTestimonials()
{
    for(auto it=MWReviews.begin();it!=MWReviews.end();++it){
        ui->Testimonial_text->setText(it->review + "\nFrom the " + it->tName + " on " + it->revDate + ".\n\n");
    }

}

void MainWindow::on_Request_Pamplet_clicked()
{
    Pamphlet *pamphlet;
    pamphlet = new Pamphlet(DM);
    pamphlet->show();
}

void MainWindow::on_Exit_Button_clicked()
{
    this->close();
}
