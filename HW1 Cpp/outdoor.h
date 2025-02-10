// Following code defines the header file for the OutdoorSports class and it is another derived class from Product class
// I added constructor to initialize the object with more additional parameters such as size, durability and weather ratin
#ifndef OUTDOOR_H
#define OUTDOOR_H
#include "product.h"

// This class represents products related to outdoor sport
// It includes constructor for set up  name, price, stock, size, durability and weather rating of the product
class OutdoorSports : public Product {
public:
    OutdoorSports(string n, double p, int s, int size, string durability, int weatherRating);
    void getDetails() override;

private:
// Member variables to store additional attributes specific to outdoor sports
//Size refers to size of the product,
//Durability refers to the material or build quality of the product.
// Weather rating indicates how well the product performs in different weather conditions
    int size;
    string durability;
    int weatherRating;
};
#endif
