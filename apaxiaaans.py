s = input()

for i in range(len(s)):
    if i == 0:
        print(s[i], end="")
    elif s[i] != s[i-1]:
        print(s[i], end="")