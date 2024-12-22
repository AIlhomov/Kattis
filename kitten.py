tree = {}
k = int(input().strip())

while True:
    line = input().strip()
    if line == '-1':
        break
    branch = list(map(int, line.split()))
    parent = branch[0]
    for child in branch[1:]:
        tree[child] = parent

def find_path(node):
    path = []
    while node in tree:
        path.append(node)
        node = tree[node]
    path.append(node)
    return path

print(" ".join(map(str, find_path(k))))