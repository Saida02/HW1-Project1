# Following code create Product base class, and this class contain funtion
# These functions are keeping basic information, update functinality and applying discount
class Product:
    def __init__(self, name, price, stock):
        self.name = name
        self.price = price
        self.stock = stock

    def apply_discount(self, discount_percent):
        self.price -= self.price * (discount_percent / 100)

    def update_stock(self, new_add):
        new_add = self.stock + new_add 

    def update_price(self, new_price):
        self.price = new_price
    
    def __str__(self):
        return f"{self.name}: ${self.price}, Stock: {self.stock}"