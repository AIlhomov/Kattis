n = int(input())
torn = list(map(int, input().split()))

antalTorn = 1

for i in range(n-1):
    if torn[i] < torn[i+1]:
        antalTorn += 1

print(antalTorn)