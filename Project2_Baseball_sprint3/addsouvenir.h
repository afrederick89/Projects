#ifndef ADDSOUVENIR_H
#define ADDSOUVENIR_H

#include <QDialog>
#include "souvenirtable.h"
#include "sqlmanager.h"
/** \class addSouvenir
 * Class for adding souvenir data to the DB
 */
namespace Ui {
class addSouvenir;
}

class addSouvenir : public QDialog
{
    Q_OBJECT

public:
    explicit addSouvenir(QList<Souvenir> inData, QWidget *parent = 0); ///Constructor
    ~addSouvenir(); ///Destructor

private slots:
    void on_pushButton_2_clicked(); ///Closes this UI view

    void on_pushButton_clicked();/// Calls to SQL database to add souvenir

private:
    Ui::addSouvenir *ui;///Pointer to UI element
    QString stadium; ///Stadium name
};

#endif // ADDSOUVENIR_H
