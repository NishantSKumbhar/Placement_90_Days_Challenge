a = "Blue Sky Entertainment"
print(a)

l = list(a)
print(l)
print("".join(l))

k = ['Karad', 'Satara', 'Pune', 'Patan', 'Chiplun']

print("_".join(k))
print("*".join(k))
print(" : ".join(k))

d = {
	'AAA' : 1,
	'BBB' : 2,
	'CCC' : 3
}

print("_".join(d))

print(f"Reversed : {a[::-1]}")
print("a",a)
r = "".join(reversed(a))
print(f"Reversed : {r}")

# To Ignore the Escape Sequence we use r or R

raw_string = r"\n\t\'Ekdam okk aahe sagale"
print(raw_string)

print('*************************')

# Binary Representation
print("16 in Binary : {0:b}".format(16))
print("10 in Binary : {0:b}".format(10))

# Formating of floats
# Exponent Representation :
print("165.6458 will be {0:e}".format(165.6458))

h = 1/6
print(h)

print("Rounded Value : {0:.3f}".format(h))

s1 = "Blue Sky Entertainment"
print(f"s1 : {s1}")
if s1.endswith('Sky Entertainment'):
	print('yes')
else:
	print('no')

k = "xsls@bluesky.com"
if k.endswith("@bluesky.com"):
	print("Welcome")
else:
	print("Sorry , Invalid Email")

if k.startswith("x"):
	print("OKKk")


h = '18192812'
if h.isdigit():
	print('YES DIGIT')

# g = 'asasaasassd'
# if g.isaplpha():
# 	print('all are alphabets')

print(k.index('@', 0))


"""
White Space Characters :
	    ‘ ‘ – Space
    ‘\t’ – Horizontal tab
    ‘\n’ – Newline
    ‘\v’ – Vertical tab
    ‘\f’ – Feed
    ‘\r’ – Carriage return
"""
# to identify them

s = "blueksy@mail\nhas okwith\tbut the\n"
count = 0
for i in s:
	if i.isspace():
		count += 1
print("Count : ",count)


# alphanumeric ===> alphabets + numbers

h = "12asasa2323"
if h.isalnum():
	print("Alphanumeric")