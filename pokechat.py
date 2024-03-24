s = input()
id = input()

for i in range(0, len(id), 3):
    a = id[i:i+3]
    print(s[int(a)-1], end='')
    