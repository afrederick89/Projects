#ifndef SQLMANAGER_H
#define SQLMANAGER_H
#include <iostream>
#include <vector>
#include <iterator>
#include <QtSql>
#include <QString>
#include <QVector>
#include <QDebug>

/** \struct Login
 * Struct Login definition
 */
struct Login{
    int logID;      /// Login ID
    QString logName; /// Login Username
    QString logPass; /// Login Password
};
/** \struct curCustomer
 * Struct curCustomer definition
 */
struct curCustomer{
    int idNum;  ///Customer id number
    QString cName; ///Customer Name
    QString cAddress; ///Customer Address
    QString cInterest; ///Customer interest
    QString cPriority; ///Customer priority
};
/** \struct potCustomer
 * Struct potCustomer definition
 */
struct potCustomer{
    int idNum; /// Potential customer ID num
    QString cName; /// potential customer name
    QString cAddress; /// potential customer address
    QString cInterest; /// potential customer interest
    QString cPriority; /// potential customer priority
};
/** \struct curProducts
 * Struct curProducts definition
 */
struct curProducts{
    int pID; /// Product id num
    QString pName; /// Product name
    double pPrice; /// product price
};
/** \struct MaintPlan
 * Struct MaintPlan definition
 */
struct MaintPlan{
    QString mpLength; /// Maint plan length
    double mpCost;    /// maint plan cost
};
/** \struct Purchases
 * Struct Purchases definition
 */
struct Purchases{
    QString cName;  ///Customer name
    QString pProduct; ///Product purchased
    int pQty; /// Quantity of product purchased
    QString planName; ///Plan length for product
    double planCost; ///Plan cost
    double pCost; ///Product cost
    double total_Cost; ///Total cost of purchase line

};
/** \struct Testimonial
 * Struct Testimonial definition
 */
struct Testimonial{
    QString tName; ///Reviewers name
    QString review; ///Review
    QString revDate; ///Date review was made
};

/** \class SQLManager
 * Data Persistance Class - Loads and Saves (Member,LoginType,Product,Sale) data to SQL database
 */
class SQLManager
{
public:
    SQLManager(QString& path); ///1 arg constructor for path to DB
    ~SQLManager();             ///Destructor
    bool loadAdminLogins(QVector<Login>& vlogin); ///Loads adminlogin table
    bool loadCustLogins(QVector<Login>& vlogin);  ///Loads customerlogin table
    bool loadCurrentCustomer(QVector<curCustomer>& vCCust); ///Loads current Customers
    bool loadPotentialCustomer(QVector<potCustomer>& vPCust); ///Loads potential customers
    bool loadProducts(QVector<curProducts>& vproducts); ///Loads current products
    bool loadMaintenancePlans(QVector<MaintPlan>& vMaintPlan); ///Loads maintenance plans
    bool loadPurchases(QVector<Purchases>& vPurchases); ///loads purchases
    bool loadTestimonials(QVector<Testimonial>& vReviews); ///loads testimonials
    bool addTestimonial(Testimonial &inReview); ///Adds testimonial to database
    bool addPurchase(Purchases &inPurchase); ///Adds purchase to database
    bool addCustomer(curCustomer &customer); ///Adds customer to database
    bool deleteCustomerFromDb(curCustomer &customer); ///Deletes customer from database
    bool addPotentialCustomer(potCustomer &inPotCustomer); ///Adds Potential customer to database

private:
    QSqlDatabase m_db; /// QT SQL database access
};

#endif // SQLMANAGER_H
