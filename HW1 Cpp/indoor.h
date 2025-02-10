// Following code define  header file for the IndoorSports class which it is  derived class from Product.
// I added constructors to initialize the member variables like this:
#ifndef INDOOR_H
#define INDOOR_H
#include "product.h"

// This class represents products related to indoor sports.
// It includes a constructor for setting the name, price, stock, and sport type of the product.
class IndoorSports : public Product {
public:
// Following constructor to initialize the object with given parameters
IndoorSports(string n, double p, int s, string sportType, string material, string size, string type);
//Following part is overriding  getDetails function to display  product details
    void getDetails() override;
// And this member variable to store  type of sport
private:
string sportType;
string material;
string size;
string type;
};

#endif

