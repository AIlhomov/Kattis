def solve(n, data):
    max_speed = 0
    for i in range(1, n):
        dist_diff = data[i][1] - data[i-1][1]
        time_diff = data[i][0] - data[i-1][0]
        speed = dist_diff // time_diff
        if speed > max_speed:
            max_speed = speed
    return max_speed

n = int(input())
data = [list(map(int, input().split())) for _ in range(n)]
print(solve(n, data))