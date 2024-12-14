def solve(c, p, heights):
    res = 0
    for h in heights:
        if h > c + p:
            res += 1
            p, c = c, h
    return res

n, c, p = map(int, input().split())
heights = [int(input()) for _ in range(n)]
print(solve(c, p, heights))
