n = list(map(int, input().split()))
l = []
for i in range(n[0]):
    s = list(map(str, input().split()))
    l.append(s)

count = 0

for i in l:
    seen = set()
    for j in i:
        if j in seen:
            count += 1
        else:
            seen.add(j)

print(count)