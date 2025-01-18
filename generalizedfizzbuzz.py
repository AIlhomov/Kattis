import math

n, a, b = map(int, input().split())

fizzbuzz = n // (a * b // math.gcd(a, b))
fizz = n // a - fizzbuzz
buzz = n // b - fizzbuzz

print(fizz, buzz, fizzbuzz)
