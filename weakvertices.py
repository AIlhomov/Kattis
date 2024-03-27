class Node:
    def __init__(self, value):
        self.value = value
        self.neighbors = []

    def add_neighbor(self, neighbor):
        self.neighbors.append(neighbor)
    def is_weak(self):
        for neighbor in self.neighbors:
            for neighbor2 in self.neighbors:
                if neighbor2 in neighbor.neighbors:
                    return False
        return True
    
def weak_vertices(graph):
    weak = []
    for node in graph:
        if node.is_weak():
            weak.append(node.value)
    return weak

def main():
    n = int(input())
    while n != -1:
        graph = []
        for i in range(n):
            graph.append(Node(i))
        for i in range(n):
            neighbors = list(map(int, input().split()))
            for j in range(n):
                if neighbors[j]:
                    graph[i].add_neighbor(graph[j])
        print(' '.join(map(str, weak_vertices(graph))))
        n = int(input())

if __name__ == '__main__':
    main()