#ifndef PAMPHLET_H
#define PAMPHLET_H

#include <QWidget>
#include "datamanager.h"
#include "QDebug"

/*! Request a Pamphlet Header.
    Header file for the Request pamphlet feature.
*/

namespace Ui {
class Pamphlet;
}

class Pamphlet : public QWidget
{
    Q_OBJECT

public:
    explicit Pamphlet(DataManager *inDM, QWidget *parent = 0);
    ~Pamphlet();
    bool allFields();

private slots:
    void on_submitButton_clicked();

private:
/*! Data.
    creates a datamanager to connect to the database.
    creates a potentialCustomer to send a potential customer to the vector.
*/
    Ui::Pamphlet *ui;
    DataManager *DM;
    potCustomer PC;
};

#endif // PAMPHLET_H
