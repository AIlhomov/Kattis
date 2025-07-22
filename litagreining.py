r, g, b = map(int, input().split())


if g == b == r == 255:
    print("hvitur")
elif g == b == r == 0:
    print("svartur")
elif g == b == r:
    print("grar")
elif r == g and b < r:
    print("gulur")
elif r == b and g < r:
    print("fjolubleikur")
elif g == b and r < g:
    print("blagraenn")
elif r > g and r > b:
    print("raudur")
elif g > r and g > b:
    print("graenn")
elif b > r and b > g:
    print("blar")
else:
    print("othekkt")