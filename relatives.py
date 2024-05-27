def euler_totient(x):
    result = x
    p = 2
    while p * p <= x:
        if x % p == 0:
            while x % p == 0:
                x //= p
            result -= result // p
        p += 1
    if x > 1:
        result -= result // x
    return result

while True:
    n = int(input())
    if n == 0:
        break
    print(euler_totient(n))