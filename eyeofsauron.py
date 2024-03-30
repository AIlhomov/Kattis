s = input()

c = s.count("|")
correct = False

if (c % 2 == 0):
    a = c // 2
    for i in range(a):
        if (s[i] == "|"):
            if (i+1 == a and s[i+1] == "("):
                correct = True
        else:
            correct = False

if (correct):
    print("correct")
else:
    print("fix")