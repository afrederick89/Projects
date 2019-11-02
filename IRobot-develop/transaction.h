#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "customer.h"

#include <iostream>
#include <vector>
using namespace std;

class Transaction
{
public:
    Transaction();

    Transaction(Customer purchaseCustomer, vector<Product> productsPurchased, MaintenancePlanDefinition maintenancePlanPurchased);

    Customer getPurchaseCustomer() const;
    void setPurchaseCustomer(const Customer &value);

    MaintenancePlanDefinition getMaintenancePlanPurchased() const;

    vector<Product> getProductsPurchased() const;
    void setProductsPurchased(const vector<Product> &value);

private:
    // [1,1]
    Customer purchaseCustomer;

    // [0,n]
    vector<Product> productsPurchased;

    // [1,1]
    MaintenancePlanDefinition maintenancePlanPurchased;

};

#endif // TRANSACTION_H
