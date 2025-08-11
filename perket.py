import itertools

n = int(input())

ingredients = []
for i in range(n):
    sour, bitter = map(int, input().split())
    ingredients.append((sour, bitter))

res = float('inf')

for r in range(1, n+1):
    for combo in itertools.combinations(ingredients, r):
        sour = 1
        bitter = 0
        for s, b in combo:
            sour *= s
            bitter += b
        diff = abs(sour - bitter)
        if diff < res:
            res = diff

print(res)
