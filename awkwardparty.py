n = int(input())
x = list(map(int, input().split()))

last = {}
res = n

for i in range(n):
    if x[i] in last:
        distance = i - last[x[i]]
        res = min(res, distance)
    last[x[i]] = i

print(res)