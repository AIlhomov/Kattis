def tile(n):
    if n % 2 == 1:
        return 0
    
    if n == 0:
        return 1
    if n == 2:
        return 3
    if n == 4:
        return 11
    if n == 6:
        return 41
    
    dp = [0] * (n + 1)
    dp[0] = 1
    dp[2] = 3
    for i in range(4, n + 1, 2):
        dp[i] = 3 * dp[i - 2]
        for j in range(4, i + 1, 2):
            dp[i] += 2 * dp[i - j]
    return dp[n]

while True:
    n = int(input())
    if n == -1:
        break
    print(tile(n))