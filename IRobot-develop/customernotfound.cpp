#include "customernotfound.h"
#include "ui_customernotfound.h"

customernotfound::customernotfound(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customernotfound)
{
    ui->setupUi(this);
}

customernotfound::~customernotfound()
{
    delete ui;
}

void customernotfound::on_retry_clicked()
{
    this->reject();
}
