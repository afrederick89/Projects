#include "invalidentry.h"
#include "ui_invalidentry.h"

InvalidEntry::InvalidEntry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InvalidEntry)
{
    ui->setupUi(this);
}

InvalidEntry::~InvalidEntry()
{
    delete ui;
}

void InvalidEntry::on_pushButton_clicked()
{
    this->reject();
}
