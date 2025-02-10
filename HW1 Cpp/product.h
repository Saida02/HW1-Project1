// This code I define header file for Product class (my base class) and i added constructor to initiaklize its attributes
//It also includes virtual function getDetails() which must be overridden byderived classes.
//and virtual destructor to ensure proper cleanup when we delete object
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;
class Product {
public:
    Product(string n, double p, int s);  
    virtual void getDetails() = 0;
    virtual ~Product() {}  
protected:
    string name;
    double price;
    int stock;
};
#endif
