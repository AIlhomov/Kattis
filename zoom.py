n, steps = map(int, input().split())
arr = list(map(int, input().split()))
for i in range(steps-1, n, steps):
    print(arr[i], end=" ")