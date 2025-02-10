from product import Product
# In this part I created IndoorProduct derived class from Product base claas and added some additinal parameters
class IndoorProduct(Product):
    def __init__(self, name, price, stock, sport_type, material, size, usage_type):
        super().__init__(name, price, stock)
        self.sport_type = sport_type
        self.material = material
        self.size = size
        self.usage_type = usage_type
    
    def __str__(self):
        return f"{self.name} (Indoor - {self.sport_type}, Material: {self.material}, Size: {self.size}, Type: {self.usage_type}): ${self.price}, Stock: {self.stock}"