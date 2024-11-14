import math

def is_safe(v0, theta, x1, h1, h2):
    g = 9.81  # gravity

    theta_rad = math.radians(theta)

    t = x1 / (v0 * math.cos(theta_rad))

    y = v0 * t * math.sin(theta_rad) - 0.5 * g * t**2

    if h1 + 1 < y < h2 - 1:
        return "Safe"
    else:
        return "Not Safe"

n = int(input())

test_cases = []

for i in range(n):
    v0, theta, x1, h1, h2 = map(float, input().split())
    test_cases.append((v0, theta, x1, h1, h2))

for v0, theta, x1, h1, h2 in test_cases:
    print(is_safe(v0, theta, x1, h1, h2))
