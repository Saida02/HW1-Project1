from indoor import IndoorProduct
from outdoor import OutdoorProduct
from inventory import Inventory

def main():
    inventory = Inventory()
# We add produst using following codes
    tennis_racket = IndoorProduct("Indoor Tennis Racket", 50.0, 10, "Tennis", "Plastic", "Standard", "Professional")
    volleyball = IndoorProduct("Volleyball", 60.0, 20, "Volleyball", "Rubber", "Standard", "Professional")
    hiking_boots = OutdoorProduct("Outdoor Hiking Boots", 120.0, 15, 38, "High", 4)
    
    inventory.add_product(tennis_racket)
    inventory.add_product(volleyball)
    inventory.add_product(hiking_boots)
    
# And we can display them with following codes
    print("\n**************** INVENTORY BEFORE CHANGES ****************")
    inventory.display_inventory()
    
# We apply discount 
    inventory.apply_discount_all(10)
# We can uptade product stock
    inventory.update_product_stock("Volleyball", 25)
    inventory.update_product_price("Outdoor Hiking Boots", 100)
    
# After all changes following code show us final inventory system stock
    print("\n**************** INVENTORY AFTER CHANGES ****************")
    inventory.display_inventory()
if __name__ == "__main__":
    main()