t = int(input())
for i in range(t):
    cities = []
    n = int(input())
    for j in range(n):
        cities.append(input())
    print(len(set(cities)))
        