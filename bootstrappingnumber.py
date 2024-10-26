import math

def find_x(n):
    left, right = 1.0, n
    while right - left > 1e-7:
        mid = (left + right) / 2
        power = mid * math.log(mid)
        target = math.log(n)
        if abs(power - target) < 1e-6:
            return mid
        elif power < target:
            left = mid
        else:
            right = mid
    return (left + right) / 2

n = int(input())
res = find_x(n)
print(f"{res:.6f}")
