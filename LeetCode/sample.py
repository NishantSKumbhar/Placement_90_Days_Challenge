a = 87823
s = 0

while a > 0:
	p = a % 10
	s = s*10 + p 
	a = a // 10

print(s)