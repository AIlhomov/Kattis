def solve(r, c, rows, attendance):
    directions = []
    
    for i in range(r):
        row = rows[i]
        actual_row = row.split()
        attendance_row = attendance[i * c:(i + 1) * c]
        
        if actual_row == attendance_row:
            directions.append("left")
        else:
            directions.append("right")
    
    return directions

n = list(map(int, input().split()))
r = n[1]
c = n[2]

rows1 = []
attendance1 = []

for i in range(r):
    rows1.append(input())

for i in range(n[0]):
    attendance1.append(input())

output = solve(r, c, rows1, attendance1)
for direction in output:
    print(direction)
