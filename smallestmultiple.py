import sys

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def lcm(a, b):
    return a * b // gcd(a, b)

def main():
    for line in sys.stdin:
        n = list(map(int, line.strip().split()))
        res = n[0]
        for i in range(1, len(n)):
            res = lcm(res, n[i])
        print(res)

if __name__ == '__main__':
    main()