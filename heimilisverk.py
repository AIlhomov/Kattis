n = int(input())

seen = set()

for _ in range(n):
    chore = input()
    if chore not in seen:
        seen.add(chore)
        print(chore)

    
    