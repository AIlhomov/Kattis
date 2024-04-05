input()
s = input()
coffee = 0
ans = 0
for i in range(len(s)):
    if s[i] == '1':
        coffee = 3
    if coffee > 0:
        coffee -= 1
        ans += 1
print(ans)