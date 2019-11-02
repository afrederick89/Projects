#include "customertools.h"
#include "ui_customertools.h"
#include <purchaseorder.h>
#include <QSortFilterProxyModel>
#include <QTime>

customerTools::customerTools(DataManager *inDM, QString inUser, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerTools)
{
    prev = parent;
    DM = inDM;
    user = inUser;
    DM->getPurchases(P_Data);
    SetUserOnlyData();
    Table = new P_Table(P_Data, user);
    Proxy = new QSortFilterProxyModel(this);
    Proxy->setSourceModel(Table);
    ui->setupUi(this);
    ui->C_Tabs->setCurrentIndex(0);
    ui->Purchase_Table->reset();
    ui->Purchase_Table->setModel(Proxy);
    ui->Purchase_Table->setSortingEnabled(true);
}

customerTools::~customerTools()
{
    delete ui;
}

void customerTools::on_Place_Order_clicked()
{
    PurchaseOrder *purchase;
    purchase = new PurchaseOrder(DM, user);
    this->hide();
    purchase->exec();
    this->show();
}

void customerTools::on_Exit_button_clicked()
{
    this->reject();
    prev->show();
}

void customerTools::SetUserOnlyData() {
    for(auto it=P_Data.begin();it!=P_Data.end();++it){
        if(it->cName != user){
            P_Data.erase(it);
        }
    }
}

void customerTools::on_SubmitButton_clicked()
{
    Testimonial cReview;
    cReview.tName = user;
    cReview.review = ui->Review_text->toPlainText();
    cReview.revDate = QDate::currentDate().toString();
    DM->AddReview(cReview);
    ui->Review_text->clear();
    ui->Review_text->setText("Dear IRobot Team,\n");
}

void customerTools::resetTable(){
    delete Proxy;
    delete Table;
    DM->getPurchases(P_Data);
    SetUserOnlyData();
    Table = new P_Table(P_Data, user);
    Proxy = new QSortFilterProxyModel(this);
    Proxy->setSourceModel(Table);
    ui->Purchase_Table->reset();
    ui->Purchase_Table->setModel(Proxy);
    ui->Purchase_Table->setSortingEnabled(true);
}
