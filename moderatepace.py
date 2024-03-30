n = int(input())

daily = list(map(int, input().split()))
ideal = list(map(int, input().split()))
second_ideal = list(map(int, input().split()))

plan = []
for i in range(n):
    options = [daily[i], ideal[i], second_ideal[i]]
    options.sort()
    median = options[1]
    plan.append(median)

print(*plan)
