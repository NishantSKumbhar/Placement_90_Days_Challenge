# from collections import Counter
# def is_ok(l):
# 	d = {}
# 	a = 1
# 	for i in range(len(l)):
# 		if Counter(l[i]) == Counter(l[i+1]):
# 			l.pop(i)

# 	print(l) 



# l = [[1, 2, 3], [2, 1, 3], [3, 2, 1], [4, 2, 1], [3, 2, 4], [2, 4, 3]]
# a = is_ok(l)
# print(a)


# def a(l):
# 	l = sorted(l)
# 	print(l)

# a([1, 6, 4, 3,2])


g_l = []
def is_there(l):
    l.sort
    if len(g_l) == 0:
        g_l.append(l)
        return True
    else:
        for i in g_l:
            for j in range(len(l)):
                if i[j] == l[j]:
                    return False
            g_l.append(i)    
        return True  


y = [[1, 2, 3], [4, 5, 6], [2, 3, 1], [5, 6, 4], [2, 3, 4], [5, 6,7]]
k = []
for i in y:
	s = is_there(i)
	k.append(s)

print(k)