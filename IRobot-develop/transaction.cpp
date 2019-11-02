#include "transaction.h"

Transaction::Transaction()
{

}

Transaction::Transaction(Customer purchaseCustomer, vector<Product> productsPurchased, MaintenancePlanDefinition maintenancePlanPurchased)
{
    this->purchaseCustomer = purchaseCustomer;
    this->productsPurchased = productsPurchased;
    this->maintenancePlanPurchased = maintenancePlanPurchased;
}

Customer Transaction::getPurchaseCustomer() const
{
    return purchaseCustomer;
}

void Transaction::setPurchaseCustomer(const Customer &value)
{
    purchaseCustomer = value;
}

MaintenancePlanDefinition Transaction::getMaintenancePlanPurchased() const
{
    return maintenancePlanPurchased;
}

vector<Product> Transaction::getProductsPurchased() const
{
    return productsPurchased;
}

void Transaction::setProductsPurchased(const vector<Product> &value)
{
    productsPurchased = value;
}
