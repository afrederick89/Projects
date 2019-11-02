#ifndef MODIFYSOUVENIR_H
#define MODIFYSOUVENIR_H

#include <QDialog>
#include "souvenirtable.h"
/** \class ModifySouvenir
 * Class for modifying souvenirs from the DB
 */
namespace Ui {
class ModifySouvenir;
}

class ModifySouvenir : public QDialog
{
    Q_OBJECT

public:
    explicit ModifySouvenir(QList<Souvenir> inSou, QWidget* parent = 0); /// Constructor
    ~ModifySouvenir(); ///Destructor

    void genLists(); ///Generates lists for the UI

private slots:
    void on_SouvenirBox_currentIndexChanged(); /// Adjusts UI data to current index

    void on_pushButton_2_clicked(); /// Closes this UI

    void on_mod_button_clicked(); /// Calls to SQL database to modify souvenir data

private:
    Ui::ModifySouvenir *ui; ///Pointer to this UI element
    QList<QString> souvList; /// List of souvenir names
    QList<Souvenir> modList; /// List of souvenir data
};

#endif // MODIFYSOUVENIR_H
