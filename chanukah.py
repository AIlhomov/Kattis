
p = float(input())
for i in range(int(p)):
    k = list(map(float, input().split()))
    s = k[1]
    for j in range(int(k[1])):
        s += j
    print(f'{i+1} {int(s+int(k[1]))}')