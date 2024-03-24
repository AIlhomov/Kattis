n = list(map(int, input().split()))
symbols = {'.': 20, 'O': 10, '\\': 25, '/': 25, 'A': 35, '^': 5, 'v': 22}
total = 0
for _ in range(n[0]):
    s = input()
    for j in symbols:
        total += s.count(j) * symbols[j]
print(total)