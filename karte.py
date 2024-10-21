def solve():
    s = input().strip()
    
    suits = {'P': set(), 'K': set(), 'H': set(), 'T': set()}
    
    for i in range(0, len(s), 3):
        suit = s[i]
        num = int(s[i + 1:i + 3])
        if num in suits[suit]:
            print('GRESKA')
            return
        suits[suit].add(num)
        
    print(13 - len(suits['P']), 13 - len(suits['K']), 13 - len(suits['H']), 13 - len(suits['T']))
    
solve()
