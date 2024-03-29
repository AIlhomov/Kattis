adup = input().split()

for i in range(len(adup)):
    if adup.count(adup[i]) > 1:
        break

print("yes" if i == len(adup) - 1 else "no")
    
