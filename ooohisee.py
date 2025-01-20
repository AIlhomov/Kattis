def find_treasure_location(r, c, grid):
    directions = [
        (-1, -1), (-1, 0), (-1, 1),  # Top-left, Top, Top-right
        (0, -1),         (0, 1),    # Left, Right
        (1, -1), (1, 0), (1, 1)     # Bottom-left, Bottom, Bottom-right
    ]
    
    treasure_locations = []

    for i in range(1, r - 1):
        for j in range(1, c - 1):
            if grid[i][j] == '0':
                surrounded = all(grid[i + di][j + dj] == 'O' for di, dj in directions)
                if surrounded:
                    treasure_locations.append((i + 1, j + 1))

    if len(treasure_locations) == 0:
        print("Oh no!")
    elif len(treasure_locations) > 1:
        print(f"Oh no! {len(treasure_locations)} locations")
    else:
        print(f"{treasure_locations[0][0]} {treasure_locations[0][1]}")

r, c = map(int, input().split())
grid = [input().strip() for _ in range(r)]

find_treasure_location(r, c, grid)
