import math

rectangle = []

for i in range(3):
    x, y = map(int, input().split())

    rectangle.append((x, y))

p = rectangle[0]
q = rectangle[1]
m = rectangle[2]


first = math.dist(p, m)
second = math.dist(q, m)
third = math.dist(p, q)

#print(first, second, third)
dist = 0

#print(p[0])

# -5 1
# -3 -3
# 5 1

if first == second:
    #print(first)
    dist = first
    #print(m)

    distX = q[0] + p[0]
    distY = q[1] + p[1]

    print(distX-m[0], distY-m[1])
    
    # x = abs(p[0] + q[0])
    #print(x)

elif second == third:
    #print(second)
    dist = second
    #print(q)

    distX = m[0] + p[0]
    distY = m[1] + p[1]

    print(distX-q[0], distY-q[1])

    #x = abs(q[0] + p[0])
    #print(x)
elif third == first:
    #print(third)
    dist = third
    #print(p)

    distX = m[0] + q[0]
    distY = m[1] + q[1]

    print(distX-p[0], distY-p[1])

    #x = abs(p[0] + p[0])
    #print(x)

#print(rectangle[0][0] - rectangle[1][0] + rectangle[0][1] - rectangle[1][1])
