import math
t = int(input())

res = []
for i in range(t):
    n = int(input())
    
    is_odd = (n % 2 == 1)

    root = math.isqrt(n)
    is_square = (root * root == n)

    if is_odd and is_square:
        res.append("OS")
    elif is_odd:
        res.append("O")
    elif is_square:
        res.append("S")
    else:
        res.append("EMPTY")

print("\n".join(res))
