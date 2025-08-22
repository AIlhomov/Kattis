keyboard = {'q': 'a', 'w': 'b', 'e': 'c', 
            'r': 'd', 't': 'e', 'y': 'f', 
            'u': 'g', 'i': 'h', 'o': 'i', 
            'p': 'j', 'a': 'k', 's': 'l', 
            'd': 'm', 'f': 'n', 'g': 'o', 
            'h': 'p', 'j': 'q', 'k': 'r', 
            'l': 's', 'z': 't', 'x': 'u', 
            'c': 'v', 'v': 'w', 'b': 'x', 
            'n': 'y', 'm': 'z'}
input()
s = input()
space = True
for c in s:
    for key, val in keyboard.items():
        if val == c:
            print(key, end='')
            space = False
    if space:
        print(' ', end='')
    space = True
