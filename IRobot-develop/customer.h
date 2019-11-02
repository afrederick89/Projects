#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "basecustomer.h"
#include "product.h"
#include <stdlib.h>
#include <time.h>
#include <vector>

class Customer : public BaseCustomer
{
public:
    Customer();
    // return true if repeated
    bool isIdRepeated(int id);

    void setCustomerId();
    string getPriority() const;
    void setPriority(const string &value);
    
    int getCustomerId() const;
    
    vector<Product> getPurchases() const;
    void setPurchases(const vector<Product> &value);
    
private:
    string priority;
    int customerId;
    static vector<int> ids;
    vector<Product> purchases;
};

#endif // CUSTOMER_H
