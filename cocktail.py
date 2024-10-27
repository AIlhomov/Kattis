n, t = list(map(int, input().split()))

durations = [int(input()) for _ in range(n)]

durations.sort()

for i in range(1, n):
    if durations[i] <= t * i:
        print("NO")
        break
else:
    print("YES")
