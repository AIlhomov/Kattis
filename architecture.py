def is_possible(R, C, east, north):
    grid = [[0 for _ in range(C)] for _ in range(R)]
    
    for i in range(R):
        for j in range(C):
            grid[i][j] = min(east[i], north[j])
    
    for i in range(R):
        for j in range(C):
            if max([grid[i][j] for j in range(C)]) != east[i]:
                return False
    
    for j in range(C):
        if max([grid[i][j] for i in range(R)]) != north[j]:
            return False
    
    return True

R, C = list(map(int, input().split()))

east = list(map(int, input().split()))
north = list(map(int, input().split()))

if is_possible(R, C, east, north):
    print("possible")
else:
    print("impossible")
