n = int(input())

for i in range(n):
    element = input()
    shorted = input()
    intuitive = True

    s = set(shorted)
    for char in s:
        if char not in element:
            intuitive = False
            break
    if intuitive:
        print("YES")
    else:
        print("NO")
