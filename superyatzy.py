from collections import Counter

def most_frequent(List):
    occurence_count = Counter(List)
    return occurence_count.most_common(1)[0][0]

n, change = map(int, input().split())
dices = []

for i in range(n):
    dices.append(int(input()))

most_frequent_dice = most_frequent(dices)
#print(most_frequent_dice)
for num in dices:
    if change < 0:
        break
    if num != most_frequent_dice:
        change -= 1

if change >= 0:
    print("Ja")
else:
    print("Nej")
