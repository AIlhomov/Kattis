import sys

input = sys.stdin.read
data = input().splitlines()

n, m = map(int, data[0].split())
pieces_set = set()

for i in range(1, n + 1):
    box = list(map(int, data[i].split()))
    pieces = box[1:]
    pieces_set.update(pieces)

if all(piece in pieces_set for piece in range(1, m + 1)):
    print("Jebb")
else:
    print("Neibb")

