word = input()
word2 = input()

count = 0

for i in range(len(word)):
    if word[i] != word2[i]:
        count += 1

print(count+1)