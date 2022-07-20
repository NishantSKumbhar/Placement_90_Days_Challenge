l = ['ZZZ', 'AAA', 'LLL', 'HHH', 'YYY']
e1 = enumerate(l)

e2 = enumerate(l, 100)

print(list(e1))

for i, j in e2:
	print(i, j)

