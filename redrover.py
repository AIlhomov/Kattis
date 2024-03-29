route = input()
length = len(route)

for i in range(len(route)):
    for j in range(i + 1, len(route) + 1):
        subsequence = route[i:j]
        macro = route.replace(subsequence, "M")
        total = len(macro) + len(subsequence)
        length = min(length, total)

print(length)
