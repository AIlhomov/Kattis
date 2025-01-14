quadkey = input().strip()

zoom_level = len(quadkey)

x, y = 0, 0

for i, char in enumerate(quadkey):
    digit = int(char)
    x *= 2
    y *= 2
    if digit == 1:
        x += 1  # Top-right quadrant
    elif digit == 2:
        y += 1  # Bottom-left quadrant
    elif digit == 3:
        x += 1  # Bottom-right quadrant
        y += 1

print(zoom_level, x, y)
