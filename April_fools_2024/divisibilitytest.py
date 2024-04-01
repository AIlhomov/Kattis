def prime(n):
    primes = [2, 3, 5, 7, 11, 13, 17, 19]
    for prime in primes:
        if n % prime == 0:
            return prime

n = int(input())
print(prime(n))