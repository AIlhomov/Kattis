count = 0

n = int(input())
for i in range(n):
    a = int(input())
    if a % 2 == 1:
        count += 1

print(count)