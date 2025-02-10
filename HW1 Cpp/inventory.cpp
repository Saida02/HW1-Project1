#include "inventory.h"
#include "indoor.h"
#include "outdoor.h"
#include <iostream>
void InventoryManager::addProduct(Product* p) {
    products.push_back(p);
}

void InventoryManager::displayInventory() {
    std::cout << "******************** Indoor Sports Product Stock **************" << std::endl;
    for (auto& p : products) {
        if (dynamic_cast<IndoorSports*>(p)) { 
            p->getDetails();
        }
    }

    std::cout << "******************** Outdoor Sports Product Stock **************" << std::endl;
    for (auto& p : products) {
        if (dynamic_cast<OutdoorSports*>(p)) { 
            p->getDetails();
        }
    }
}
