print("Jay Ganesh")

g_num = 5

def fun(number):
	print(f"Number is : {number}")
	global g_num
	print(f"Global Number is : {g_num}")
	g_num = g_num + 1
	print(f"After Inceiment : {g_num}")

fun(7)

print(f"After all of these : {g_num}")


print("-----------------------------------------------------")
print("-----------------------------------------------------")
print("-----------------------------------------------------")


def outer_function():
	print("Inside the Outer Function")

	def inner_function():
		print("Inside the Inner Function")
		var = 10
		print(f"Var : {var}")
		print("End of Inner Function")

	inner_function()
	print(f"From here I cannot access the var value , see below error")
	print(f"var : {var}")

outer_function()
