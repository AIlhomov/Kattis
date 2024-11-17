g, r = map(int, input().split())

max_health = 0

pairs = min(g, r)
max_health += pairs * 10
g -= pairs
r -= pairs

max_health += (g // 3) * 10
g %= 3

max_health += (g // 2) * 3
g %= 2

max_health += g 

print(max_health)