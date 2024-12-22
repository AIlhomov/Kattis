cities = [input() for _ in range(int(input()) * 2)]
l = set(cities[1::2])
for item in l:
    print(item, cities[1::2].count(item))