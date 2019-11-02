#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <datamanager.h>
#include <customertools.h>

namespace Ui {
/** \class MainWindow
 * MainWindow class - Provides the user with the ability to login as admin or customer
 * as well as allows the user to request a pamphlet or view various tabs
 */
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(DataManager* inDM, QWidget *parent = 0); ///Constructor with DB access
    ~MainWindow();

    QVector<curCustomer> getDatamanagerCurrentCustomers(); ///Function to get current customers

    QVector<Purchases> getDataManagerPurchases(); ///Function to get current purchases

    DataManager *getDM() const; ///Function to return DB access
    void setDM(DataManager *value); ///Function to set data manager
    void setTestimonials(); ///Function to set testimonials

private slots:

    void on_CustomerLogin_Button_clicked(); ///Function to allow customer login

    /// displays admin view
    void on_AdminLogin_Button_clicked();

    void on_Request_Pamplet_clicked(); ///Function to request pamplet

    void on_Exit_Button_clicked(); ///Function Exits program

private:
    Ui::MainWindow *ui;
    DataManager* DM; ///Database access
    QVector<Testimonial> MWReviews; ///Vector of testimonials from DB

};

#endif // MAINWINDOW_H
