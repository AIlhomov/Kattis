name = input()
n = int(input())
days = 0

for i in range(n):
    days += 1
    namsdag = input()
    if len(name) != len(namsdag):
        continue # Skip to next iteration if the length of the name and namsdag are not equal
    diff = sum(1 for a, b in zip(name, namsdag) if a != b)
    
    if diff == 1 or diff == 0:
        break

print(days)
