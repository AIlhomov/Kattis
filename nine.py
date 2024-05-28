t = int(input())

while t > 0:
    t -= 1
    n = int(input())
    n -= 1
    
    res = pow(9, n, 1000000007)
    print((8 * res) % 1000000007)