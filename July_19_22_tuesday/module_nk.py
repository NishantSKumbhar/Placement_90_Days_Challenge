print("Inporting Module nk")

def find_index(l: list, target):

	for i , j in list(enumerate(l)):
		if j == target:
			return i

	return -1
