#include "deletesouvenir.h"
#include "ui_deletesouvenir.h"

DeleteSouvenir::DeleteSouvenir(QList<Souvenir> sList, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteSouvenir)
{
    prev = parent;
    modList = sList;
    this->genLists();
    ui->setupUi(this);
    ui->SouvenirBox->addItems(souvList);
    ui->SouvenirBox->setCurrentIndex(0);
    ui->team_name->setText(modList[0].teamName);
    ui->item_edit->setText(modList[0].itemName);
    ui->cost_edit->setText(QString::number(modList[0].itemCost));
}

DeleteSouvenir::~DeleteSouvenir()
{
    delete ui;
}

void DeleteSouvenir::genLists(){
    for(auto it = modList.begin();it!=modList.end();it++){
        souvList.push_back(it->itemName);
    }
}

void DeleteSouvenir::on_back_button_clicked()
{
    this->close();
}

void DeleteSouvenir::on_SouvenirBox_currentIndexChanged()
{
    ui->item_edit->setText(modList[ui->SouvenirBox->currentIndex()].itemName);
    ui->cost_edit->setText(QString::number(modList[ui->SouvenirBox->currentIndex()].itemCost));
}

void DeleteSouvenir::on_del_button_clicked()
{
    QString num = ui->cost_edit->text();
    double cost = num.toDouble();
    Souvenir delSouve = Souvenir(ui->team_name->text(), modList[0].stadiumName,ui->item_edit->text(), cost);
    SQLManager::getInstance()->delSouvenir(delSouve);
    this->close();
}
