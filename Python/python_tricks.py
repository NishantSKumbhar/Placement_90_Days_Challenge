# a, b = input("Enter the Numbers : ").split()

# print(" a : ",a);
# print(" b : ",b);


# likes = 1212
# share = 232
# comment = 40

# conditions = [
# 	likes > 200,
# 	share > 100,
# 	comment > 10
# ]

# if all(conditions):    # and 
# 	print("Awosme Video")


# conditions = [
# 	likes > 2000,
# 	share > 1000,
# 	comment > 10
# ]

# if any(conditions):    # or 
# 	print("Awosme Video")


# a = [1, 3, 5, 6, 5,4 ,3 , 2, 1, 1, 1, 1, 3, 4,5 ,8, 9]
# print(a)

# print(max(a, key=a.count))

# a = 34
# print(a & 1)


# names = ['Sarang', 'Shashank', 'Shahi', 'Shukla']
# for i, name in enumerate(names, start=1):
# 	print(f" {i} : {name}")


# names = ['Perter Parker', 'Toney Stark', 'Bruce Banner', 'Natasha']
# heros = ['Spider Man', 'Iron Man', 'Hulk', 'Black Widow']
# universe = ['Marvel', 'Marvel','Marvel', 'Marvel']
# for i, name in enumerate(names):
# 	hero = heros[i]
# 	print(f"{name} is {hero}.")

# for name, hero, uni in zip(names, heros, universe):
# 	print(f"{name} is {hero} and belog to {uni} Universe.")

# here all lists are of same length , if we have lists with different length
# then zip stops over shortest length of list.

# a , b = (23, 45)
# print(a)

# sometime if we dont use variable, editor yell at us
# so we use _ insted of variable
# _ means we dont wana use at this time

# a , _ = (23, 45)
# print(a)

# d = {
# 	'name' : 'Corey',
# 	'sname' : 'Scafer'
# }

# for i, j in d.items():
# 	print(i ," : ", j)


# from getpass import getpass
# username = input("Enter Your Username : ")
# password = getpass("Enter the Password ")

# print(f"Hello , {username} You Password is {password}")
# print("You are Successfully logged in...")


# names = ['Peter Parker', 'Toney Stark', 'Bruce Banner', 'Natasha']
# heros = ['Spider Man', 'Iron Man', 'Hulk', 'Black Widow']

# print([i for i in zip(names, heros)])

# my_d = { n : h for n,h in zip(names, heros)}
# print(my_d)

# my_d = { n : h for n,h in zip(names, heros) if n != 'Peter Parker'}
# print(my_d)


# for set comprehension

a = [1,2,1,1,1,2,3,3,2,1,2,2, 7,7,6,5,4,3,2,2,1]
s = { i for i in a }
print(s)