"""
Given list,
order the list in sorted manner, in odd, even, odd, even....likewise
but start with smallest one i.e if even is small then order -> 
							even , odd, even , odd
"""

import itertools

def order_it(l):

	l.sort()
	even_list = [x for x in l if x % 2 == 0]
	odd_list = [x for x in l if x % 2 != 0]
	for (a, b) in itertools.zip_longest(even_list, odd_list):
		print(a,b)




l = [9, 12, 23, 8, 5]
a = order_it(l)	