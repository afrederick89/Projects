#ifndef PRODUCT_H
#define PRODUCT_H
#include "maintenanceplan.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

class Product
{
public:
    Product();

    Product(string productName, vector<string> supportedEnvironments, string conceptOfOperations, vector<string> customerTestimonials, double price, string guaranteePolicy);

    string getProductName() const;
    void setProductName(const string &value);

    MaintenancePlan getMaintenancePlan() const;
    void setMaintenancePlan(const string &value);

    vector<string> getSupportedEnvironments() const;
    void setSupportedEnvironments(const vector<string> &value);

    string getConceptOfOperations() const;
    void setConceptOfOperations(const string &value);

    vector<string> getCustomerTestimonials() const;
    void setCustomerTestimonials(const vector<string> &value);

    double getPrice() const;
    void setPrice(double value);

    string getGuaranteePolicy() const;
    void setGuaranteePolicy(const string &value);

    void printProductToConsole();

private:
    string productName;
    vector<string> supportedEnvironments;
    string conceptOfOperations;
    vector<string> customerTestimonials;
    double price;
    string guaranteePolicy;
};

#endif // PRODUCT_H
