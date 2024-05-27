n = int(input())
words = list(map(str, input().split()))

counter = 0
for i in range(n):
    if words[i] == "mumble":
        counter += 1
    elif words[i] == str(i + 1):
        counter += 1
    else:
        break

if counter == n:
    print("makes sense")
else:
    print("something is fishy")