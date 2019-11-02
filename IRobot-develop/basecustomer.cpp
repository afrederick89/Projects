#include "basecustomer.h"

BaseCustomer::BaseCustomer()
{
    firstName = "";
    lastName = "";
    address = "";
    interestLevel = "";
}

string BaseCustomer::getFirstName() const
{
    return firstName;
}

void BaseCustomer::setFirstName(const string &value)
{
    firstName = value;
}

string BaseCustomer::getLastName() const
{
    return lastName;
}

void BaseCustomer::setLastName(const string &value)
{
    lastName = value;
}

string BaseCustomer::getAddress() const
{
    return address;
}

void BaseCustomer::setAddress(const string &value)
{
    address = value;
}

string BaseCustomer::getInterestLevel() const
{
    return interestLevel;
}

void BaseCustomer::setInterestLevel(const string &value)
{
    interestLevel = value;
}
