n = int(input())
m = int(input())
problems = input().split()

total = [0] * n

for _ in range(m):
    scores = list(map(int, input().split()))
    for i in range(n):
        total[i] += scores[i]

i = total.index(max(total))
print(problems[i])
