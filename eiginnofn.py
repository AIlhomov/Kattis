n = int(input())

residents = {}
for _ in range(n):
    name = input().strip().split()
    if len(name) == 1:
        residents[name[0]] = "Jebb"
    else:
        residents[name[0]] = f"Neibb en {' '.join(name)} er heima"

m = int(input())

for _ in range(m):
    query = input().strip()
    print(residents.get(query, "Neibb"))
