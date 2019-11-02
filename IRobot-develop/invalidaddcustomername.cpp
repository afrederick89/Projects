#include "invalidaddcustomername.h"
#include "ui_invalidaddcustomername.h"

InvalidAddCustomerName::InvalidAddCustomerName(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InvalidAddCustomerName)
{
    ui->setupUi(this);
}

InvalidAddCustomerName::~InvalidAddCustomerName()
{
   delete ui;
}

void InvalidAddCustomerName::on_retry_clicked()
{
   this->reject();
}
