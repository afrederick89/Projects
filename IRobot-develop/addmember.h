#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include "admintools.h"

#include <QObject>
#include <QWidget>
#include <QDialog>

namespace Ui {
    class addmember;
}

class addmember : public QDialog
{
    Q_OBJECT
public:
    /// constructor
    explicit addmember(QWidget *parent = 0);
    /// destructor
    ~addmember();

    /// sets adminTools
    void setATools(adminTools *value);

    /// run without debug mode
    void executeOnAcceptClickedAsNormal();

    /// run with debug mode
    void executeOnAcceptClickedAsTest();

private slots:
    void on_exit_clicked();

    void on_accept_clicked();

private:
    adminTools *aTools;
    QWidget *prev;
    Ui::addmember *ui;
};

#endif // ADDMEMBER_H
