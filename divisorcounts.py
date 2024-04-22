n = int(input())

count = [0] * (n + 1)

count[0] = 1

for i in range(1, n + 1):
    for j in range(i, n + 1, i):
        count[j] += 1

ans = [str(count[i]) for i in range(1, n + 1)]

print('\n'.join(ans))