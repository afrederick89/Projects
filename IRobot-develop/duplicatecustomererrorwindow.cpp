#include "duplicatecustomererrorwindow.h"

DuplicateCustomerErrorWindow::DuplicateCustomerErrorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DuplicateCustomerErrorWindow)
{
    ui->setupUi(this);
}

DuplicateCustomerErrorWindow::~DuplicateCustomerErrorWindow()
{
    delete ui;
}

void DuplicateCustomerErrorWindow::on_retry_clicked()
{
    this->reject();
}
