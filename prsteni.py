import math

n = int(input())
radii = list(map(int, input().split()))

r1 = radii[0]

for i in range(1, n):
    r2 = radii[i]
    gcd = math.gcd(r1, r2)
    num = r1 // gcd
    den = r2 // gcd
    print(f"{num}/{den}")