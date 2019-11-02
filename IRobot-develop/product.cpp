#include "product.h"


Product::Product()
{
}

Product::Product(string productName, vector<string> supportedEnvironments, string conceptOfOperations, vector<string> customerTestimonials, double price, string guaranteePolicy)
{
    this->productName = productName;
    for(unsigned int i = 0; i < supportedEnvironments.size(); i ++){
        this->supportedEnvironments.at(i) = supportedEnvironments.at(i);
    }
    this->conceptOfOperations = conceptOfOperations;
    for(unsigned int i = 0; i < customerTestimonials.size(); i ++){
        this->customerTestimonials.at(i) = customerTestimonials.at(i);
    }
    this->price = price;
    this->guaranteePolicy = guaranteePolicy;
}

string Product::getProductName() const
{
    return productName;
}

void Product::setProductName(const string &value)
{
    productName = value;
}

vector<string> Product::getSupportedEnvironments() const
{
    return supportedEnvironments;
}

void Product::setSupportedEnvironments(const vector<string> &value)
{
    supportedEnvironments = value;
}

string Product::getConceptOfOperations() const
{
    return conceptOfOperations;
}

void Product::setConceptOfOperations(const string &value)
{
    conceptOfOperations = value;
}

vector<string> Product::getCustomerTestimonials() const
{
    return customerTestimonials;
}

void Product::setCustomerTestimonials(const vector<string> &value)
{
    customerTestimonials = value;
}

double Product::getPrice() const
{
    return price;
}

void Product::setPrice(double value)
{
    price = value;
}

string Product::getGuaranteePolicy() const
{
    return guaranteePolicy;
}

void Product::setGuaranteePolicy(const string &value)
{
    guaranteePolicy = value;
}

void Product::printProductToConsole()
{
    // excluding maintenance plan because idk how to feel about using an enum
   printf("Name: %s\nConcept of Operations: %s\nPrice: %.2f\nGuarantee Policy: %s\n",
          productName.c_str(), conceptOfOperations.c_str(), price, guaranteePolicy.c_str());
   printf("Supported Environment: %s\n", supportedEnvironments.at(0).c_str());
   printf("Customer Testimonials: %s\n", customerTestimonials.at(0).c_str());
}


