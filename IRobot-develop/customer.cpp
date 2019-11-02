#include "customer.h"

vector<int> Customer::ids;

Customer::Customer()
{

}

bool Customer::isIdRepeated(int id)
{
    for(unsigned int i = 0; i < ids.size(); i++){
        if(ids.at(i) == id)
            return true;
        continue;
    }
    return false;
}

void Customer::setCustomerId()
{
    srand(time(0));
    // 9,999,999 -> 1,000,000
    customerId = rand() % 9999999 + 1000000;
    while(isIdRepeated(customerId)){
        customerId = rand() % 9999999 + 1000000;
    }
    ids.push_back(customerId);
}

string Customer::getPriority() const
{
    return priority;
}

void Customer::setPriority(const string &value)
{
    priority = value;
}

int Customer::getCustomerId() const
{
    return customerId;
}

vector<Product> Customer::getPurchases() const
{
    return purchases;
}

void Customer::setPurchases(const vector<Product> &value)
{
    purchases = value;
}
