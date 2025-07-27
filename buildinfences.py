n = int(input())
allXPoints = []
allYPoints = []

for i in range(n):
    x, y = map(int, input().split())

    allXPoints.append(x)
    allYPoints.append(y)

minX = min(allXPoints)
maxX = max(allXPoints)
minY = min(allYPoints)
maxY = max(allYPoints)

width = maxX - minX + 2
height = maxY - minY + 2

print(2 * (height + width))