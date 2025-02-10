// Following code defines the implementation of the IndoorSports class methods.
// I added the constructor initialize the object with  provided values to name, price, stock, and sport typ
#include "indoor.h"
#include <iostream>

// This  constructor to initialize  IndoorSports object by pass the parameters to the our base clsaa Produc
IndoorSports::IndoorSports(string n, double p, int s, string sportType, string material, string size, string type) 
    : Product(n, p, s), sportType(sportType), material(material), size(size), type(type) {}
// This function outputs the details of the IndoorSports product, including its name, sport type, price, and stock.
// And it prints the details to the screen
void IndoorSports::getDetails() {
    // Material ve size parametreleriyle birlikte ürün bilgilerini yazdırıyoruz
    cout << name << " (Indoor - " << sportType << ", Material: " << material << ", Size: " << size << ", Type: " << type << "): $" << price << ", Stock: " << stock << endl;
}
