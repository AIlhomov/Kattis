n = input()
letter = [x for x in n]
s = input().split()

for i in range(len(s)):
    for j in range(len(letter)):
        if letter[j] in s[i]:
            print("*" * len(s[i]), end=" ")
            break
    else:
        print(s[i], end=" ")