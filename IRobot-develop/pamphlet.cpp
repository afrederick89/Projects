#include "pamphlet.h"
#include "nullspaces.h"
#include "ui_pamphlet.h"

/*! Request a Pamphlet.
    this is the source code for the ui to request a pamphlet.
*/

/*! Constructor.
    the constructor takes a DataManager class to submit information to the database.
*/
Pamphlet::Pamphlet(DataManager *inDM, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pamphlet)
{
    ui->setupUi(this);
    DM = inDM;
}

Pamphlet::~Pamphlet()
{
    delete ui;
}

/*! Submit the Request.
    when the submit button is clicked, it takes all of the
    information and sends it to the database.
*/
void Pamphlet::on_submitButton_clicked()
{
    if (allFields()){
        PC.cAddress = QString::fromStdString(ui->addressEdit->text().toStdString()
                                             +" "+ ui->cityEdit->text().toStdString() +", "+
                                             ui->stateEdit->text().toStdString() +" "+
                                             ui->zipEdit->text().toStdString());
        PC.cInterest = ui->interestLevel->currentText();
        PC.cName = ui->nameEdit->text();
        PC.cPriority = "To be reviewed";
        DM->addPotCustomer(PC);
        this->hide();
    }else{
        NullSpaces *emptySpace;
        emptySpace = new NullSpaces();
        emptySpace->show();
    }
}

/*! Boolian allFields Function.
    checks to see if all of the text fields are filled in.
*/
bool Pamphlet::allFields(){
    if (ui->addressEdit->text() != "" &&
            ui->cityEdit->text() != "" &&
            ui->nameEdit->text() != "" &&
            ui->stateEdit->text() != "" &&
            ui->zipEdit->text() != ""){
        return true;
    }else {
        return false;
    }
}
