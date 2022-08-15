# def outer_function(o):
	
# 	def inner_function():
# 		print(f"Message : {o} .")

# 	return inner_function

# k = outer_function("This is k message")
# l = outer_function("This is l message")

# k()
# l()


# def decorator_function(fun):
# 	print("This is executing before the wrapper function.")
# 	def wraper_function():
# 		return fun()

# 	return wraper_function

# @decorator_function
# def some_fun():
# 	print("Some Function is Running.......")


# # some_fun = decorator_function(some_fun)
# some_fun()

def decorator_fun(gun):
	
	def wrapper(*args, **kwargs):
		print("This is the extra functionality we have added.")
		return gun(*args, **kwargs)

	return wrapper

@decorator_fun
def summation(x, y):
	print(f"Sum of {x} & {y} is {x+y} .")


@decorator_fun
def displaying():
	print("I am only for the display.")

# summation = decorator_fun(summation)
summation(4, 5)
displaying()
