"""
* Regular methods takes instance as first argument (self).
* To change this i.e take the class as first argument we use @classmethod decorator.
* classmethod is also called alternative to constrctor
* staticmethod is a just like class method but there is no self, or cls its just simple method
	implemented in a class for ease of use.
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
	

	# Regular Method
	def access_x(self):
		print("Hello")
		# h = 5
		# if is_work_day(h):
		# 	print("Successfully")
		# else:
		# 	print("Annonymslly")


	# classmethod
	@classmethod
	def change_g(cls, new_name):
		cls.g = new_name



	#classmethod to separate the string and then return object
	@classmethod
	def form_string(cls, st):
		name, price, color, ram, is_amoled_display = st.split('-')
		return cls(name, price, color, ram, is_amoled_display)


	# static method
	# as you see there is no big relation between class and method
	@staticmethod
	def is_work_day(day):
		if day == 5 or day == 6:
			return False
		return True



m1 = Mobile("11 Pro", 89122, "Product Red", 8, False)
m2 = Mobile("S1 Pro", 11111, "Coal Black", 12, True)
#m1.g = "JJJ"
m1.show()
print('*' * 50)
m2.show()

print('*' * 50)
Mobile.change_g("BLUE SKY ENTERTAINMENT")
m1.show()
print('-'*50)
m2.show()

print('\n','#' * 50, '\n')

# suppose insted of separate name we have only one string which contains all components of Mobile
s = "NoteSeries-78000-PINK-4-False"

#one way:
name, price, color, ram, is_amoled_display = s.split('-')
m3 = Mobile(name, price, color, ram, is_amoled_display)
m3.show()

print('-+' * 40)
#second way is to use classmethod
s1 = "MOTOROLLA-211212-XBLUE-4-TRUE"
m4 = Mobile.form_string(s1)
m4.show()
print('-+' * 40)

import datetime

my_date = datetime.date(2022, 7, 1)
print(Mobile.is_work_day(my_date))

print('-+' * 40)

m1.access_x()