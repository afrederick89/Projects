#include "purchaseorder.h"
#include "ui_purchaseorder.h"

PurchaseOrder::PurchaseOrder(DataManager *inDM,QString validCustomer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PurchaseOrder)
{
    DM = inDM;
    current_Customer = validCustomer;
    DM->getProducts(cProducts);
    DM->getPlans(cPlans);
    setList();
    ui->setupUi(this);
    ui->Product1->setText(cProducts[0].pName);
    ui->Product2->setText(cProducts[1].pName);
    ui->Product3->setText(cProducts[2].pName);
    ui->Plan1->addItems(Plans);
    ui->Plan2->addItems(Plans);
    ui->Plan3->addItems(Plans);
    ui->PR1_Cost->display(cProducts[0].pPrice * ui->Pr1_Qty->value() + cPlans[ui->Plan1->currentIndex()].mpCost);
    ui->PR2_Cost->display(cProducts[1].pPrice * ui->Pr2_Qty->value() + cPlans[ui->Plan2->currentIndex()].mpCost);
    ui->PR3_Cost->display(cProducts[2].pPrice * ui->Pr3_Qty->value() + cPlans[ui->Plan3->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

PurchaseOrder::~PurchaseOrder()
{
    delete ui;
}

void PurchaseOrder::on_pushButton_2_clicked()
{
    this->reject();
}

void PurchaseOrder::setList(){
    for(auto it = cPlans.begin();it!=cPlans.end();++it){
        Plans.push_back(it->mpLength);
    }
}

void PurchaseOrder::on_Pr1_Qty_valueChanged(int)
{
    ui->PR1_Cost->display(cProducts[0].pPrice * ui->Pr1_Qty->value() + cPlans[ui->Plan1->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_Pr2_Qty_valueChanged(int)
{
    ui->PR2_Cost->display(cProducts[1].pPrice * ui->Pr2_Qty->value() + cPlans[ui->Plan2->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_Pr3_Qty_valueChanged(int)
{
    ui->PR3_Cost->display(cProducts[2].pPrice * ui->Pr3_Qty->value() + cPlans[ui->Plan3->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_Plan1_currentIndexChanged(QString)
{
    ui->PR1_Cost->display(cProducts[0].pPrice * ui->Pr1_Qty->value() + cPlans[ui->Plan1->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_Plan2_currentIndexChanged(QString)
{
    ui->PR2_Cost->display(cProducts[1].pPrice * ui->Pr2_Qty->value() + cPlans[ui->Plan2->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_Plan3_currentIndexChanged(QString)
{
    ui->PR3_Cost->display(cProducts[2].pPrice * ui->Pr3_Qty->value() + cPlans[ui->Plan3->currentIndex()].mpCost);
    ui->Total_Cost->display(ui->PR1_Cost->value()+ui->PR2_Cost->value()+ui->PR3_Cost->value());
}

void PurchaseOrder::on_pushButton_clicked()
{

    QVector<Purchases> cOrder;
    Purchases temp;
    if(ui->Pr1_Qty->value() != 0) {
        temp.cName = current_Customer;
        temp.pProduct = ui->Product1->text();
        temp.pQty = ui->Pr1_Qty->value();
        temp.planName = ui->Plan1->currentText();
        temp.planCost = cPlans[ui->Plan1->currentIndex()].mpCost;
        temp.total_Cost = ui->PR1_Cost->value();
        cOrder.push_back(temp);
    }
    if(ui->Pr2_Qty->value() != 0){
        temp.cName = current_Customer;
        temp.pProduct = ui->Product2->text();
        temp.pQty = ui->Pr2_Qty->value();
        temp.planName = ui->Plan2->currentText();
        temp.planCost = cPlans[ui->Plan2->currentIndex()].mpCost;
        temp.total_Cost = ui->PR2_Cost->value();
        cOrder.push_back(temp);
    }
    if(ui->Pr3_Qty->value() != 0){
        temp.cName = current_Customer;
        temp.pProduct = ui->Product3->text();
        temp.pQty = ui->Pr3_Qty->value();
        temp.planName = ui->Plan3->currentText();
        temp.planCost = cPlans[ui->Plan3->currentIndex()].mpCost;
        temp.total_Cost = ui->PR3_Cost->value();
        cOrder.push_back(temp);
    }

    DM->placeOrder(cOrder);
    this->reject();
}
