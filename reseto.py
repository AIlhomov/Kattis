def reseto(n, k):
    sieve = [True] * (n + 1)
    count = 0

    for i in range(2, n + 1):
        if sieve[i]:
            for multiple in range(i, n + 1, i):
                if sieve[multiple]:
                    sieve[multiple] = False
                    count += 1
                    if count == k:
                        return multiple
                
n, k = map(int, input().split())

print(reseto(n, k))