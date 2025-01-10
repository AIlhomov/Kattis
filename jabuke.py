def area_formula(x1, y1, x2, y2, x3, y3):
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2

xA, yA = map(int, input().split())
xB, yB = map(int, input().split())
xC, yC = map(int, input().split())

INF = 1e-9

total_area = area_formula(xA, yA, xB, yB, xC, yC)

N = int(input())

tree_count = 0

for _ in range(N):
    x, y = map(int, input().split())
    
    area1 = area_formula(x, y, xB, yB, xC, yC)
    area2 = area_formula(xA, yA, x, y, xC, yC)
    area3 = area_formula(xA, yA, xB, yB, x, y)
    
    if abs(area1 + area2 + area3 - total_area) < INF:
        tree_count += 1

print(f"{total_area:.1f}")
print(tree_count)
