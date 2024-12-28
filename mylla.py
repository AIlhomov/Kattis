n = int(input())
s = input()

arnar_rounds = 0
hannes_rounds = 0
game_index = 0

while arnar_rounds < n and hannes_rounds < n:
    arnar = 0
    hannes = 0
    games_played = 0
    
    while games_played < 5 and arnar < 3 and hannes < 3 and game_index < len(s):
        if s[game_index] == 'A':
            arnar += 1
        else:
            hannes += 1
        
        games_played += 1
        game_index += 1
    
    if arnar >= 3:
        arnar_rounds += 1
    elif hannes >= 3:
        hannes_rounds += 1

if arnar_rounds == n:
    print("Hannes")
else:
    print("Arnar")
