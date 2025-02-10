from product import Product
# In this part I created Outdoor derived class from Product base claas and added some additinal parameters
class OutdoorProduct(Product):
    def __init__(self, name, price, stock, size, durability, weather_rating):
        super().__init__(name, price, stock)
        self.size = size
        self.durability = durability
        self.weather_rating = weather_rating
    
    def __str__(self):
        return f"{self.name} (Outdoor - Size: {self.size}, Durability: {self.durability}, Weather Rating: {self.weather_rating}): ${self.price}, Stock: {self.stock}"