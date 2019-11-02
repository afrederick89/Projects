#include "nullspaces.h"
#include "ui_nullspaces.h"

/*! Null Space Error.
    an error box for when there is an empty box.
*/

NullSpaces::NullSpaces(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NullSpaces)
{
    ui->setupUi(this);
}

NullSpaces::~NullSpaces()
{
    delete ui;
}

/*! Retry Button Clicked.
    hides the window so that the user can retry his query.
*/
void NullSpaces::on_pushButton_clicked()
{
    this->hide();
}
