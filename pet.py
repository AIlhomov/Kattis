b = [0]
winner = 0
for i in range(1, 6):
    a = list(map(int, input().split()))
    b.append(sum(a))
    if b[i] > b[winner]:
        winner = i
print(winner, b[winner])