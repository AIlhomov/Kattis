def working_server(servers):
    return len(servers) - max(sum(c == 'N' for c in component) for component in zip(*servers))

n = int(input())
l = []
for i in range(n):
    s = input().split()
    l.append(''.join(s))
print(working_server(l))