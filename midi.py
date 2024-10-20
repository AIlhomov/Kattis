n = int(input())
s = []
for i in range(n):
    s.append(input()[::-1])

s.reverse()
print(''.join(s))
