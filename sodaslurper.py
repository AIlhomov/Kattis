e, f, c = map(int, input().split())

total_bottles = e + f
sodas = 0

while total_bottles >= c:
    new_sodas = total_bottles // c
    sodas += new_sodas
    total_bottles = new_sodas + (total_bottles % c)

print(sodas)
