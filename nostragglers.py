n = int(input())
res = 0
for i in range(n):
    s = input().split()
    if s[1] == 'IN':
        res += int(s[2])
    else:
        res -= int(s[2])
if res == 0:
    print('NO STRAGGLERS')
else:
    print(res)