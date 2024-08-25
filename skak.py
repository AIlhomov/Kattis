rook = list(map(int, input().split()))
pawn = list(map(int, input().split()))

if rook[0] == pawn[0] or rook[1] == pawn[1]:
    print(1)
else:
    print(2)