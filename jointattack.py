import math

def fraction(ko):
    numerator = 1
    denominator = ko[-1]
    for i in range(len(ko) - 2, -1, -1):
        numerator += denominator * ko[i]
        numerator, denominator = denominator, numerator
    numerator, denominator = denominator, numerator
    
    gcd = math.gcd(numerator, denominator)
    numerator //= gcd
    denominator //= gcd
    
    return numerator, denominator

def main():
    int(input())
    co = list(map(int, input().split()))
    
    print(*fraction(co), sep = "/")
    
if __name__ == "__main__":
    main()