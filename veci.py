def next_permutation(s):
    for i in range(len(s) - 2, -1, -1):
        if s[i] < s[i + 1]:
            break
    else:
        return False

    for j in range(len(s) - 1, i, -1):
        if s[j] > s[i]:
            break

    s[i], s[j] = s[j], s[i]

    s[i + 1:] = reversed(s[i + 1:])
    return True

s = list(input().strip())

if next_permutation(s):
    print(''.join(s))
else:
    print("0")
