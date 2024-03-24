
a = [int(input()) for i in range(int(input()))]
s = 0
for i in range(len(a)):
    s += int(str(a[i])[:-1]) ** int(str(a[i])[-1])
print(s)