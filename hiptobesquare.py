def max_layers(n):
    left, right = 0, int(1e5)
    while left < right:
        mid = (left + right + 1) // 2
        tiles = 4 * mid * (mid + 1)
        if tiles <= n:
            left = mid
        else:
            right = mid - 1
    return left

T = int(input().strip())
res = []

for _ in range(T):
    N = int(input().strip())
    res.append(max_layers(N))

for result in res:
    print(result)
