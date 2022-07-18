a = "a1b1c3"
print(type(a))

s = []
n = []
d = {}

for i in a:

	if i.isnumeric():
		n.append(i)
	else:
		s.append(i)


print(s, " >>> ", n)
# s = "a2b2c2"
# h = s.split()
# print("h : ",h)
# c = "".join(l)
# print(c)

