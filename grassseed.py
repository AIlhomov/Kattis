c = float(input())

l = int(input())
s = 0
for i in range(l):
    a, b = map(float, input().split())
    s += a * b * c
print(s)