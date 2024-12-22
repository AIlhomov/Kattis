def solve(seq):
    n = len(seq)
    if n == 1:
        return True

    differences = set()
    for i in range(1, n):
        diff = abs(seq[i] - seq[i - 1])
        if diff >= n or diff < 1:
            return False
        differences.add(diff)
    
    return len(differences) == n - 1

while True:
    try:
        line = input()
    except EOFError:
        break
    parts = list(map(int, line.split()))
    n = parts[0]
    sequence = parts[1:]
    if solve(sequence):
        print("Jolly")
    else:
        print("Not jolly")