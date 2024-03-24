s = input()
a, b, c = int(input()), int(input()), int(input())

if (a - b == c and a < b):
    print("JEDI")
elif (abs(a - b) == c and a < b):
    print("SITH")
else:
    print("VEIT EKKI")