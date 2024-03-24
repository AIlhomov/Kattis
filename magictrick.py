
s = input()
check = True
for i in s:
    if s.count(i) >= 2:
        check = False
        break
print(1 if check else 0)