n = int(input())
days = set()

for i in range(n):
    day1, day2 = map(int, input().split())
    for day in range(day1, day2 + 1):
        days.add(day)

print(len(days))