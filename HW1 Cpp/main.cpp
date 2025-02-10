#include "indoor.h"
#include "outdoor.h"
#include "inventory.h"
#include <iostream>

int main() {
    InventoryManager inv;
    cout << "***********************************************SPORTS PRODUCT INVENTORY SYSTEM************************************ "<< endl;
    Product* indoorProduct1 = new IndoorSports("Indoor Tennis Racket", 50.0, 10, "Tennis", "Plastic", "Standard", "Professional");
    Product* indoorProduct2 = new IndoorSports("Volleyball", 60.0, 20, "Volleyball", "Rubber", "Standard", "Professional");
    Product* outdoorProduct = new OutdoorSports("Outdoor Hiking Boots", 120.0, 15, 38 , "High", 4);

    inv.addProduct(indoorProduct1);
    inv.addProduct(indoorProduct2);
    inv.addProduct(outdoorProduct);

    inv.displayInventory();

    delete indoorProduct1;
    delete indoorProduct2;
    delete outdoorProduct;

    return 0;
}
//g++ -o inventory_app main.cpp product.cpp indoor.cpp outdoor.cpp inventory.cpp
// ./inventory_app.exe