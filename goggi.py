a, b, c = map(str, input().split())

a = int(a)
c = int(c)

if a > c:
    print('>')
elif a < c:
    print('<')
else:
    print('Goggi svangur!')