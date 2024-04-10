n = int(input())
students = {}
for _ in range(n):
    name = input().strip()
    students[name] = 0

m = int(input())
for _ in range(m):
    data = input().split()
    k = int(data[0])
    for name in data[1:]:
        if name in students:
            students[name] += 1

sorted_names = sorted(students.items(), key=lambda x: -x[1])

for name, count in sorted_names:
    print(count, name)