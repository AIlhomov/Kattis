def solve(test_cases):
    res = []
    for case in test_cases:
        outlets = case[1:]
        total = sum(outlet - 1 for outlet in outlets) + 1
        res.append(total)

    return res

n = int(input())
test_cases = []
for _ in range(n):
    case = list(map(int, input().split()))
    test_cases.append(case)

res = solve(test_cases)

for r in res:
    print(r)
