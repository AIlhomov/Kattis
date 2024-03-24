n = list(map(int, input().split()))
x = list(map(int, input().split()))

print(int((n[0] - n[1]) * 0.9 - sum(x)))