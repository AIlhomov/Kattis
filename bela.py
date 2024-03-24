n = input().split()

bela = 0

for i in range(int(n[0])*4):
    card = input()
    if card[0] == 'A':
        bela += 11
    elif card[0] == 'K':
        bela += 4
    elif card[0] == 'Q':
        bela += 3
    elif card[0] == 'J':
        bela += 20 if card[1] == n[1] else 2
    elif card[0] == 'T':
        bela += 10
    elif card[0] == '9':
        bela += 14 if card[1] == n[1] else 0
    elif card[0] == '8':
        bela += 0
    elif card[0] == '7':
        bela += 0
print(bela)
