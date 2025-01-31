import sys

def hangman(word, permutation):
    word_set = set(word)
    guessed_set = set()
    wrong_guesses = 0
    max_wrong_guesses = 10

    for letter in permutation:
        if letter in word_set:
            guessed_set.add(letter)
            if guessed_set == word_set:
                return "WIN"
        else:
            wrong_guesses += 1
            if wrong_guesses == max_wrong_guesses:
                return "LOSE"
    
    return "LOSE"

if __name__ == "__main__":
    input = sys.stdin.read
    data = input().split()
    word = data[0]
    permutation = data[1]
    res = hangman(word, permutation)
    print(res)