n = int(input())
res = 0
for i in range(n):
    s = input()
    if "CD" not in s:
        res += 1  
print(res)