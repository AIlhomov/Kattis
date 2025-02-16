import sys
input = sys.stdin.read
data = input().splitlines()

N = int(data[0])
queue = data[1:N+1]

C = int(data[N+1])
events = data[N+2:N+2+C]

queue_list = list(queue)

for event in events:
    parts = event.split()
    if parts[0] == "cut":
        a, b = parts[1], parts[2]
        index = queue_list.index(b)
        queue_list.insert(index, a)
    elif parts[0] == "leave":
        a = parts[1]
        queue_list.remove(a)

print("\n".join(queue_list))