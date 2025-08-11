n, m = map(int, input().split()) # number of planets and number of tunnels

start_planet_alice, start_planet_bob = map(int, input().split())

graph = [[] for _ in range(n)]

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)  # bidirectional

from collections import deque  # Import deque for efficient queue operations

# Define the BFS function
def bfs(tree, target):
    dist = [-1]*n
    queue = deque([tree])  # Initialize the queue with the starting node
    dist[tree] = 0

    while queue:  # While there are still nodes to process
        node = queue.popleft()  # Dequeue a node from the front of the queue

        if node == target:
            return dist[node]
        for neighbor in graph[node]:
            if dist[neighbor] == -1:
                dist[neighbor] = dist[node] + 1
                queue.append(neighbor)
    return -1

distance = bfs(start_planet_alice, start_planet_bob)
print((distance + 1) // 2)
