import math

x, y, x1, y1, x2, y2 = map(int, input().split())

x1, x2 = min(x1, x2), max(x1, x2)
y1, y2 = min(y1, y2), max(y1, y2)

if x < x1:
    if y < y1:
        distance = math.sqrt((x - x1) ** 2 + (y - y1) ** 2)
    elif y > y2:
        distance = math.sqrt((x - x1) ** 2 + (y - y2) ** 2)
    else:
        distance = x1 - x
elif x > x2:
    if y < y1:
        distance = math.sqrt((x - x2) ** 2 + (y - y1) ** 2)
    elif y > y2:
        distance = math.sqrt((x - x2) ** 2 + (y - y2) ** 2)
    else:
        distance = x - x2
else:
    if y < y1:
        distance = y1 - y
    elif y > y2:
        distance = y - y2
    else:
        distance = 0

print(f"{distance:.3f}")
