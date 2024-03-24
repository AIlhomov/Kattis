test_cases = int(input())
for i in range(test_cases):
    s = 1
    n = int(input())
    for j in range(1, n+1):
        s = s * j
    print(str(s)[-1])
