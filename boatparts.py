p, n = map(int, input().split())

parts = set()
replaced_day = -1

for day in range(n):
    part = input()
    parts.add(part)
    
    if len(parts) == p:
        replaced_day = day + 1
        break

if replaced_day != -1:
    print(replaced_day)
else:
    print("paradox avoided")