#ifndef DELETESOUVENIR_H
#define DELETESOUVENIR_H

#include <QDialog>
#include "souvenirtable.h"
#include "sqlmanager.h"
/** \class DeleteSouvenir
 * Class for deleting souvenirs from the DB
 */
namespace Ui {
class DeleteSouvenir;
}

class DeleteSouvenir : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteSouvenir(QList<Souvenir> sList, QWidget *parent = 0); /// Constructor
    ~DeleteSouvenir(); /// Destructor

    void genLists(); /// Generates lists for the UI

private slots:
    void on_back_button_clicked(); /// Returns to previous UI

    void on_SouvenirBox_currentIndexChanged(); /// Adjusts ui data to current index

    void on_del_button_clicked(); /// Calls to SQl database to delete data

private:
    Ui::DeleteSouvenir *ui; /// Pointer to this UI
    QList<QString> souvList; /// Souvenir names
    QList<Souvenir> modList; /// Souvenir data
    QWidget* prev; /// pointer to previous UI
};

#endif // DELETESOUVENIR_H
