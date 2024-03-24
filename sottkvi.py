n = list(map(int, input().split()))
days = n[1] + n[2]
party_count = 0
for i in range(n[0]):
    d = int(input())

    if (days - d) >= 14:
        party_count += 1
print(party_count)