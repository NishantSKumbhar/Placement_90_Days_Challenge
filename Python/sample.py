def my_decorator(gun):
	def wrapper(*args, **kwargs):
		print("Inside Wrapper")
		return gun(*args, **kwargs)

	return wrapper


@my_decorator
def display_my_name():
	print("Name : XYZ")



# display_my_name = my_decorator(display_my_name)
display_my_name()
