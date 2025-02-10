// I  coded the header file for the InventoryManager class, so it manages  collection of products.
// I added functions to add product to our inventory and display  entire inventory producrts

#ifndef INVENTORY_H
#define INVENTORY_H
#include "product.h"
#include <vector>
// This class manages collection of products So, it allows adding products to the inventory and displaying inventory list.
class InventoryManager {
public:
//The product is passing as  pointer so it can be dynamically allocate
    void addProduct(Product* p);
    void displayInventory();
private:
//A vector keep product pointers and it holds the list of products in the inventor
    vector<Product*> products;
};
#endif

