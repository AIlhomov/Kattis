def solve(c):

    #Top
    if c == 1:
        top_row = "  " + "  ".join("H" for _ in range(c))
    else:
        top_row = "  " + " ".join("H" for _ in range(c))
    print(top_row)
    if c == 1:
        mid_top = "  " + "  ".join("|" for _ in range(c))
    else: 
        mid_top = "  " + " ".join("|" for _ in range(c))
    print(mid_top)
    #Middle
    if c == 1:
        middle_row = "H-C-OH"
    else:
        middle_row = "H-" + "-".join("C" for _ in range(c - 1)) + "-C-OH"
    print(middle_row)
    
    if c == 1:
        mid_bottom = "  " + "  ".join("|" for _ in range(c))
    else:
        mid_bottom = "  " + " ".join("|" for _ in range(c))
    print(mid_bottom)
    #Bottom
    if c == 1:
        bottom_row = "  " + "  ".join("H" for _ in range(c))
    else:
        bottom_row = "  " + " ".join("H" for _ in range(c))
    print(bottom_row)
    

c = int(input())
solve(c)
