#ifndef BASECUSTOMER_H
#define BASECUSTOMER_H

#include <iostream>
#include <vector>
using namespace std;

class BaseCustomer
{
public:
    BaseCustomer();
    string getFirstName() const;
    void setFirstName(const string &value);

    string getLastName() const;
    void setLastName(const string &value);

    string getAddress() const;
    void setAddress(const string &value);

    string getInterestLevel() const;
    void setInterestLevel(const string &value);

private:
    string firstName;
    string lastName;
    string address;
    string interestLevel;
};

#endif // BASECUSTOMER_H
