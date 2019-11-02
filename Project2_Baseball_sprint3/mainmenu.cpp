#include "mainmenu.h"
#include "ui_mainmenu.h"


MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}
MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_teamInfoButton_clicked()
{
    TeamInfoWindow* teamInfoDisplay = new TeamInfoWindow;
    teamInfoDisplay->open();

    this->close();
}

void MainMenu::on_adminLoginMenuAction_triggered()
{
    // Go to the next page within the stackedWidget
    ui->stackedWidget->setCurrentIndex(1);
}

void MainMenu::on_loginButton_clicked()
{
    // Clear any previous error messages
    ui->loginErrorLabel->clear();

    if (SQLManager::getInstance()->authenticateAdminLoginRequest(ui->usernameInput->text(), ui->passwordInput->text())) {
        AdminPanel* adminPanel = new AdminPanel;
        adminPanel->show();
    } else {
        ui->loginErrorLabel->setText("Invalid username or password. Please try again.");
    }
}

void MainMenu::on_loginPageBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainMenu::on_beginTripButton_clicked()
{
    TripPlannerWindow* newTrip = new TripPlannerWindow;
    newTrip->show();
    this->close();
}
