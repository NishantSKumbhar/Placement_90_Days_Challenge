# cook your dish here
T = int(input())

for i in range(T):
    n = int(input())
    d = {}
    l = []
    maxi = 0
    for j in range(n):
        a = int(input())
        l.append(a)
        if a not in d:
            d[a] = 1
        else:
            d[a] += 1;
        
        if d[a] > maxi:
            maxi = d[a]

    print(n-maxi)



a=int(input("Number of elements in the array:-"))
n=list(map(int, input("elements of array:-").strip().split()))
print(n)
