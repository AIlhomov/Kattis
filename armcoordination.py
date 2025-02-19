x, y = map(int, input().split())

r = int(input())

corners = [
    (x - r, y + r),
    (x + r, y + r),
    (x + r, y - r),
    (x - r, y - r)
]

for corner in corners:
    print(corner[0], corner[1])