n = int(input())
l = []
for i in range(n):
    l.append(input())

count = 0
for i in range(1, n-1):
    if l[i] == 'drunk' and l[i+1] == 'sober':
        count += 1
print(count)