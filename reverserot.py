chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

def encode(s, n):
    # n is the amount of times to rotate.
    s = s[::-1]
    res = []

    for c in s:
        sIndex = chars.index(c)
        rotated = (sIndex + n) % 28
        res.append(chars[rotated])
    return ''.join(res)
t = 1

while t != 0:
    t = input()

    if t == '0':
        break
    
    t, s = t.split()

    t = int(t)

    print(encode(s, t))
