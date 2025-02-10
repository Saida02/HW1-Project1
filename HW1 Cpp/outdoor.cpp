//In this code , I define  implementation of the OutdoorSports class methods.
// I added constructor to initialize the object with values for name, price, stock, size, durabilit and weather rating
// Constructor to initialize the OutdoorSports object by passing the parameters to our base class Product
#include "outdoor.h"
#include <iostream>
OutdoorSports::OutdoorSports(string n, double p, int s, int size, string durability, int weatherRating)
: Product(n, p, s), size(size), durability(durability), weatherRating(weatherRating) {}
void OutdoorSports::getDetails() {
    cout << name << " (Outdoor - Size: " << size << ", Durability: " << durability << ", Weather Rating: " << weatherRating << "): $" << price << ", Stock: " << stock << endl;
}
