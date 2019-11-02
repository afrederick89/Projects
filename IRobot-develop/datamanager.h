#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include <sqlmanager.h>
#include <iostream>
#include <vector>
/** \class DataManager
 * DataManager class - Acquires data from various tables in the Irobot database
 * Sends read/write/delete commands to database
 */

class DataManager
{
public:
    DataManager(QString& path); ///Constructor with path for DB access
    ~DataManager();
    void loadData(); ///Loads all data functions
    bool validateAdmin(QString UN, QString PW); ///Validates admin login
    bool validateCustomer(QString UN, QString PW); ///Validates customer login
    void getProducts(QVector<curProducts> &inProducts); ///Gets all products from the DB
    void getPlans(QVector<MaintPlan> &inPlan); ///Gets all plans from the DB
    void getPurchases(QVector<Purchases> &inPurchases); ///Gets all purchases from DB
    void getReviews(QVector<Testimonial> &inReview); ///Gets all reviews from the DB
    void returnReviews(QVector<Testimonial> &inReview); ///Returns the vector of reviews by reference
    void placeOrder(QVector<Purchases>& inPurchase); ///Writes an order to the DB
    QVector<curCustomer> getCurrentCustomers(); ///Returns the current customers
    QVector<Purchases> getPurchases(); ///Returns the purchses
    void addCustomerToCurrentCustomers(curCustomer &customer); ///Adds a customer to the Datamanager
    void deleteCustomer(int idx); ///Deletes a customer from the Datamanager
    void replaceCustomer(curCustomer c, int idx); ///Replaces a customer in the Datamanager
    bool addCustomerViaDb(curCustomer customer); ///Adds a customer from the DB
    bool deleteCustomerFromDb(curCustomer customer); ///Deletes a customer from the DB
    void addPotCustomer(potCustomer& inPotCustomer); ///Adds a potential customer to the DB
    void AddReview(Testimonial &inReview); ///Adds a review to the DB
private:
    SQLManager* DB; ///The Database
    QVector<curProducts> DMProducts; ///Vector of products
    QVector<Login> DMAdminLogin; ///Vector of Admin logins
    QVector<Login> DMCustLogin; ///Vector of customer logins
    QVector<curCustomer> DMCustomer; ///Vector of current customers
    QVector<potCustomer> DMpotCustomer; ///Vector of potential customers
    QVector<Purchases> DMPurchases; ///Vector of purchases
    QVector<MaintPlan> DMPlans; ///Vector of maintenance plans
    QVector<Testimonial> DMReviews; ///Vector of reviews

};

#endif // DATAMANAGER_H
