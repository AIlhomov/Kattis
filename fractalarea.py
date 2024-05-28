import math
import sys

def fractal_area(r, n):
    area = 0.0
    curr = r
    for i in range(n):
        if i == 0:
            num_circles = 1
        else:
            num_circles = 3 ** (i - 1) * 4

        area += num_circles * math.pi * (curr ** 2)

        curr /= 2

    return area

def main():
    input = sys.stdin.read
    data = input().split()
    
    T = int(data[0])
    res = []
    
    i = 1
    for _ in range(T):
        r = int(data[i])
        n = int(data[i + 1])
        i += 2
        res.append(f"{fractal_area(r, n):.12f}")
    
    print("\n".join(res))

if __name__ == "__main__":
    main()
