f = input().strip()
h = input().strip()


i, j = 0, 0
while i < len(f) and j < len(h):
    if f[i] == h[j]:
        i += 1
    j += 1

print("Ja" if i == len(f) else "Nej")