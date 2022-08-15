def square(x):

	return x*x 


# f = square

# print(f(5))
# def cube(x):
# 	return x*x*x

# def my_map(fun, l):
# 	emp_list = []
# 	for i in l:
# 		emp_list.append(fun(i))
# 	return emp_list

# l = [10, 20, 30, 40, 50]
# p = my_map(cube, l)
# print(p)


#  #Function Returning Function

def outside_function(msg):
	def inside_function(x):
		print(msg,", Inside Function ", x )

	return inside_function

a = outside_function("Hello World")

a(90)