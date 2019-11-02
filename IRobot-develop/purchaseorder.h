#ifndef PURCHASEORDER_H
#define PURCHASEORDER_H
#include <datamanager.h>
#include <QDialog>

namespace Ui {
/** \class PurchaseOrder
 * PurchaseOrder class - Using data values from DB allows customer to send purchase requests to the DB
 */
class PurchaseOrder;
}

class PurchaseOrder : public QDialog
{
    Q_OBJECT

public:
    explicit PurchaseOrder(DataManager* inDM, QString validCustomer, QWidget *parent = 0); ///Constructor with customer name and database
    ~PurchaseOrder();
    void setList(); /// Function to create a list of maintenance plans

private slots:
    void on_pushButton_2_clicked(); /// Exit button

    void on_Pr1_Qty_valueChanged(int); ///Function to change the LCD display of purchase cost

    void on_Pr2_Qty_valueChanged(int); ///Function to change the LCD display of purchase cost

    void on_Pr3_Qty_valueChanged(int); ///Function to change the LCD display of purchase cost

    void on_Plan1_currentIndexChanged(QString); ///Function to change the maintenance plan cost

    void on_Plan2_currentIndexChanged(QString);///Function to change the maintenance plan cost

    void on_Plan3_currentIndexChanged(QString);///Function to change the maintenance plan cost

    void on_pushButton_clicked(); ///Function to send the purchase request to the DB

private:
    Ui::PurchaseOrder *ui; ///UI element
    DataManager* DM; ///The datamanager access point
    QVector<curProducts> cProducts; ///Vector of current products for cost values
    QVector<MaintPlan> cPlans; ///Vector of current plans for cost and list values
    QStringList Plans; ///List of current plans
    QString current_Customer; ///Current customers username
};

#endif // PURCHASEORDER_H
