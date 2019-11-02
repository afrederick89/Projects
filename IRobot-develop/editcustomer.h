#ifndef EDITCUSTOMER_H
#define EDITCUSTOMER_H

#include "admintools.h"

#include <QDialog>

namespace Ui {
    class EditCustomer;
}

class EditCustomer: public QDialog
{
    Q_OBJECT

public:
    explicit EditCustomer(QWidget *parent = 0);
    ~EditCustomer();

    /// populates adminTools variable
    void setATools(adminTools *value);

    /// runs with test mode
    void executeOnAcceptClickedAsTest();

    /// runs without test mode
    void executeOnAcceptClickedAsNormal();

private slots:
    /// cancels any action taken
    void on_cancelPushButton_clicked();

    /// Edits the customer
    void on_acceptPushButton_clicked();

private:
    Ui::EditCustomer *ui;
    QWidget *prev;
    adminTools *aTools;
};

#endif // EDITCUSTOMER_H
