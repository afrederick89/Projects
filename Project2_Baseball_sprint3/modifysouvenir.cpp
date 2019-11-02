#include "modifysouvenir.h"
#include "ui_modifysouvenir.h"
#include "sqlmanager.h"
ModifySouvenir::ModifySouvenir(QList<Souvenir> inSou, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifySouvenir)
{
    modList = inSou;
    this->genLists();
    ui->setupUi(this);
    ui->SouvenirBox->addItems(souvList);
    ui->SouvenirBox->setCurrentIndex(0);
    ui->team_name->setText(modList[0].teamName);
    ui->item_edit->setText(modList[0].itemName);
    ui->cost_edit->setText(QString::number(modList[0].itemCost));
}

ModifySouvenir::~ModifySouvenir()
{
    delete ui;
}

void ModifySouvenir::genLists(){
    for(auto it = modList.begin();it!=modList.end();it++){
        souvList.push_back(it->itemName);
    }
}

void ModifySouvenir::on_SouvenirBox_currentIndexChanged()
{
    ui->item_edit->setText(modList[ui->SouvenirBox->currentIndex()].itemName);
    ui->cost_edit->setText(QString::number(modList[ui->SouvenirBox->currentIndex()].itemCost));
}

void ModifySouvenir::on_pushButton_2_clicked()
{
    this->close();
}

void ModifySouvenir::on_mod_button_clicked()
{
    QString num = ui->cost_edit->text();
    double cost = num.toDouble();
    Team teamToModify = SQLManager::getInstance()->getStadiumByName(ui->team_name->text());

    Souvenir mod = Souvenir(ui->team_name->text(), teamToModify.stadiumName, ui->item_edit->text(), cost);
    SQLManager::getInstance()->modifySouvenirInfo(mod);
    this->close();
}
