from decimal import Decimal, getcontext

a, b, c = map(int, input().split())

getcontext().prec = 50

a = Decimal(a)
b = Decimal(b)
c = Decimal(c)

res = (a * b) / c

print(f"{res:.15f}")