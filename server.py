N, T = map(int, input().split())
tasks_time = list(map(int, input().split()))

current_time = 0
nr_tasks = 0

for time in tasks_time:
    current_time += time
    if current_time <= T:
        nr_tasks += 1
    else:
        break

print(nr_tasks)