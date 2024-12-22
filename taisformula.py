def solve(n, measurements):
    total = 0
    
    for i in range(n - 1):
        total += (measurements[i][1] + measurements[i + 1][1]) * (measurements[i + 1][0] - measurements[i][0]) / 2

    return total / 1000

n = int(input())
measurements = [tuple(map(float, input().split())) for _ in range(n)]

print(f"{solve(n, measurements):.6f}")