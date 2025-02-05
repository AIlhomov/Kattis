import math

l, r = map(int, input().split())

# Check if the round peg fits into the square hole
if r * math.sqrt(2) <= l:
    print("nope")
else:
    print("fits")
