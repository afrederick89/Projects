#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "sqlmanager.h"
#include "teaminfowindow.h"
#include "adminpanel.h"
#include "tripplannerwindow.h"
namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

signals:

private slots:


    void on_teamInfoButton_clicked();

    void on_adminLoginMenuAction_triggered();

    void on_loginButton_clicked();

    void on_loginPageBackButton_clicked();

    void on_beginTripButton_clicked();

private:
    Ui::MainMenu *ui;

};

#endif // MAINMENU_H
