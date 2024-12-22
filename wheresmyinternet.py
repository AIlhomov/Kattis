from collections import deque, defaultdict

def solve(N, connections):
    graph = defaultdict(list)
    for a, b in connections:
        graph[a].append(b)
        graph[b].append(a)
    
    # BFS
    visited = [False] * (N + 1)
    queue = deque([1])
    visited[1] = True
    
    while queue:
        current = queue.popleft()
        for neighbor in graph[current]:
            if not visited[neighbor]:
                visited[neighbor] = True
                queue.append(neighbor)
    
    unconnected = [i for i in range(1, N + 1) if not visited[i]]
    
    if unconnected:
        for house in unconnected:
            print(house)
    else:
        print("Connected")

N, M = map(int, input().split())
connections = [tuple(map(int, input().split())) for _ in range(M)]

solve(N, connections)
