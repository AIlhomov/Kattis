pass1 = input().strip()
pass2 = input().strip()

res = 1
for i in range(4):
    if pass1[i] == pass2[i]:
        res *= 1
    else:
        res *= 2

print(res)
