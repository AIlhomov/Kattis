def solve(r, c, grid):
    res = [['.' for _ in range(c)] for _ in range(r)]
    
    for col in range(c):
        snow_count = sum(1 for row in range(r) if grid[row][col] == 'S')
        
        for row in range(r - snow_count, r):
            res[row][col] = 'S'
    
    for row in res:
        print(''.join(row))

r, c = list(map(int, input().split()))
grid = [input() for _ in range(r)]

solve(r, c, grid)