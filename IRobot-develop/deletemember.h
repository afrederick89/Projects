#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include "admintools.h"

#include <QObject>
#include <QWidget>
#include <QDialog>

namespace Ui {
    class deletemember;
}


class deletemember: public QDialog
{
    Q_OBJECT
public:

    explicit deletemember(QWidget *parent = 0);

    ~deletemember();

    /// populate adminTOols variable
    void setATools(adminTools *value);

    /// run without test mode
    void runAcceptClickedAsNormal();

    /// run with test mode
    void runAcceptClickedAsTest();
private slots:

    /// cancels any action
    void on_exit_clicked();

    /// deletes specified customer
    void on_accept_clicked();

private:
    adminTools *aTools;
    QWidget *prev;
    Ui::deletemember *ui;
};
#endif // DELETEMEMBER_H
