def shiritori_game(words):
    said = set()
    current_player = 1

    for i, word in enumerate(words):
        if i > 0 and word[0] != words[i-1][-1]:
            return f"Player {current_player} lost"
        
        if word in said:
            return f"Player {current_player} lost"
        
        said.add(word)
        current_player = 3 - current_player
    
    return "Fair Game"

n = int(input())

words = [input() for _ in range(n)]

print(shiritori_game(words))