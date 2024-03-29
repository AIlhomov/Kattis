a = list(map(int, input().split()))
print("possible" if (a[0] * 4 + a[1] * 3) % 2 == 0 else "impossible")