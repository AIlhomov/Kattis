n = int(input())

t = n / 7
q = (n - t) / 2
l = (5/2) * q + t 

whiteArea = n * t + l * t - t * t
totalArea = n * l

print(totalArea - whiteArea)