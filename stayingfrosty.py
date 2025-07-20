w, p = map(int, input().split())

w /= 2
p *= 180

if w <= p:
    print("YES")
else:
    print("NO")