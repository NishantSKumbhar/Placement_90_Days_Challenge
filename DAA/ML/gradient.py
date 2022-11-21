import numpy as np 

def gradient_des(x, y):
	m=c= 0
	rate = 0.001
	iteration = 100
	n = len(x)
	for i in range(iteration):
		y_predicted = m * x + c
		cost = (1 / n) * sum([val ** 2 for val in (y-y_predicted)])
		mp = -(2/n)*sum(x * (y- y_predicted))
		cp = -(2/n)*sum(y- y_predicted)
		m = m - rate * mp 
		c = c - rate * cp
		print("m : ", m) 
		print("c : ", c) 
		print("cost : ",cost)
		print("\n")


X = np.array([2,4,5,6,8,10])
Y = np.array([1,2,3,4,6,7])
gradient_des(X,Y)