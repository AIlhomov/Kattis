import sys

input = sys.stdin.read

data = input().splitlines()
p, d = map(int, data[0].split()) # p = number of precincts, d = number of districts

districts = {i: {'A': 0, 'B': 0} for i in range(1, d+1)}

for i in range(1, p+1):
    d_i, a_i, b_i = map(int, data[i].split())
    districts[d_i]['A'] += a_i
    districts[d_i]['B'] += b_i

total_votes = 0
total_wasted_a = 0
total_wasted_b = 0

for d in range(1, d+1):
    a = districts[d]['A']
    b = districts[d]['B']
    total_votes += a + b
    if a > b:
        wasted_a = a - (a + b) // 2 - 1
        wasted_b = b
    else:
        wasted_a = a
        wasted_b = b - (a + b) // 2 - 1
    total_wasted_a += wasted_a
    total_wasted_b += wasted_b
    if a > b:
        print("A", wasted_a, wasted_b)
    else:
        print("B", wasted_a, wasted_b)

efficiency_gap = abs(total_wasted_a - total_wasted_b) / total_votes
print(efficiency_gap)

