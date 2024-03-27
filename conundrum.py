s = input()
count = 0
for i, s in enumerate(s, 1):
    if s != 'P' and i % 3 == 1:
        count += 1
    if s != 'E' and i % 3 == 2:
        count += 1
    if s != 'R' and i % 3 == 0:
        count += 1
print(count)