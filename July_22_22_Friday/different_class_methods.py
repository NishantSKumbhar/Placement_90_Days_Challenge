"""
* Regular methods takes instance as first argument (self).
* To change this i.e take the class as first argument we use @classmethod decorator.

"""

class Mobile:
	g = "Jay Ganesh"
	def __init__(self, name, price, color, ram, is_amoled_display):
		self.name = name
		self.price = price
		self.color = color
		self.ram = ram
		self.is_amoled_display = is_amoled_display


	# Reguslar Method
	def show(self):
		print(f"Name : {self.name}")
		print(f"Price : {self.price}")
		print(f"Color : {self.color}")
		print(f"Ram : {self.ram}")
		print(f"Amoled : {self.is_amoled_display}")
		print(f"Outside the class method : {self.g}")
	


m1 = Mobile("11 Pro", 89122, "Product Red", 8, False)

m1.show()
