def solve(n, sections):
    dna = ['?' for _ in range(n)]
    
    for s, section in sections:
        s -= 1
        for i, char in enumerate(section):
            if dna[s + i] == '?':
                dna[s + i] = char
            elif dna[s + i] != char:
                return "Villa"
    
    return ''.join(dna)

n, m = map(int, input().split())
sections = []

for _ in range(m):
    line = input().split()
    s = int(line[0])
    section = line[1]
    sections.append((s, section))

print(solve(n, sections))