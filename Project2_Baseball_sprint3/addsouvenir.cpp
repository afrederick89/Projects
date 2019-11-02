#include "addsouvenir.h"
#include "ui_addsouvenir.h"

addSouvenir::addSouvenir(QList<Souvenir> inData, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addSouvenir)
{
    stadium = inData[0].stadiumName;
    ui->setupUi(this);
    ui->team_name->setText(inData[0].teamName);
}

addSouvenir::~addSouvenir()
{
    delete ui;
}

void addSouvenir::on_pushButton_2_clicked()
{
    this->close();
}

void addSouvenir::on_pushButton_clicked()
{

    Souvenir mod = Souvenir(ui->team_name->text(), stadium, ui->iName->text(), ui->doubleSpinBox->value());
    SQLManager::getInstance()->addSouvenir(mod);
    this->close();
}
