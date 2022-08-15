def my_personal_logger(fun):
	import logging
	logging.basicConfig(filename=f"{fun.__name__}.log", level=logging.INFO)

	def wrapper(*args, **kwargs):
		logging.info(f"Ran with arguments : {args} and kwargs : {kwargs}")
		return fun(*args, **kwargs)


	return wrapper



@my_personal_logger
def display_info(name, age):
	print(f"Name : {name}    |      Age : {age}")


display_info("John", 22)
display_info("Lily", 17)