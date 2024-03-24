
# Write all the possibilities of rolling 2 dice
rolls = []
for dice1 in range(1, 7):
    for dice2 in range(1, 7):
        rolls.append((dice1, dice2))


count = 0
n = int(input())
a = list(map(int, input().split()))
for i in range(len(a)):
    for dice1, dice2 in rolls:
        if dice1 + dice2 == a[i]:
            count += 1
print(count / 36)