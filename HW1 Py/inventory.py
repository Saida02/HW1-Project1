from indoor import IndoorProduct
from outdoor import OutdoorProduct
from product import Product

class Inventory:
    def __init__(self):
        self.products = []
    
    def add_product(self, product):
        self.products.append(product)
    
    def apply_discount_all(self, discount_percent):
        for product in self.products:
            product.apply_discount(discount_percent)
    
    def update_product_stock(self, product_name, new_add):
        for product in self.products:
            if product.name == product_name:
                product.update_stock(new_add)
                return f"Updated stock for this item-- {product_name}: {new_add}"
        return "Product not found."
    
    def update_product_price(self, product_name, new_price):
        for product in self.products:
            if product.name == product_name:
                product.update_price(new_price)
                return f"Updated price for this items-- {product_name}: ${new_price}"
        return "Product not found."
    
    def display_inventory(self):
        indoor_products = [p for p in self.products if isinstance(p, IndoorProduct)]
        outdoor_products = [p for p in self.products if isinstance(p, OutdoorProduct)]
        
        print("********** Indoor Sports Product Stock **********")
        for product in indoor_products:
            print(product)
        
        print("********** Outdoor Sports Product Stock **********")
        for product in outdoor_products:
            print(product)