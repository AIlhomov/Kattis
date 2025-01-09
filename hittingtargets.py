import math

# check if a shot is inside a rectangle
def is_inside_rectangle(x, y, x1, y1, x2, y2):
    return x1 <= x <= x2 and y1 <= y <= y2

# check if a shot is inside a circle
def is_inside_circle(x, y, cx, cy, r):
    return math.sqrt((x - cx)**2 + (y - cy)**2) <= r

m = int(input())
targets = []

for _ in range(m):
    data = input().split()
    if data[0] == "rectangle":
        x1, y1, x2, y2 = map(int, data[1:])
        targets.append(("rectangle", x1, y1, x2, y2))
    elif data[0] == "circle":
        cx, cy, r = map(int, data[1:])
        targets.append(("circle", cx, cy, r))

n = int(input())
shots = [tuple(map(int, input().split())) for _ in range(n)]

for x, y in shots:
    hit_count = 0
    for target in targets:
        if target[0] == "rectangle":
            _, x1, y1, x2, y2 = target
            if is_inside_rectangle(x, y, x1, y1, x2, y2):
                hit_count += 1
        elif target[0] == "circle":
            _, cx, cy, r = target
            if is_inside_circle(x, y, cx, cy, r):
                hit_count += 1
    print(hit_count)
