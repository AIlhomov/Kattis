# 500 points at Kattis
def multigram(s):
    for i in range(1, len(s)):
        if len(s) % i == 0:
            root = s[:i]
            is_multigram = True
            for j in range(i, len(s), i):
                if sorted(s[j:j+i]) != sorted(root):
                    is_multigram = False
                    break
            if is_multigram:
                return root
    return -1

s = input()

print(multigram(s))