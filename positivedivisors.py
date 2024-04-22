import math

positivedivisors = []

n = int(input())

for i in range(1, int(math.sqrt(n)) + 1):
    if n % i == 0:
        positivedivisors.append(i)
        if i != n // i:
            positivedivisors.append(n // i)

positivedivisors.sort()
for i in positivedivisors:
    print(i)