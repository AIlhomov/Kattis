n = int(input())

max_lower_bound = 0
min_upper_bound = 1000000000
for i in range(n):
    temp1, temp2 = map(int, input().split())

    max_lower_bound = max(max_lower_bound, temp1)
    min_upper_bound = min(min_upper_bound, temp2)

if max_lower_bound <= min_upper_bound:
    print(min_upper_bound - max_lower_bound + 1, max_lower_bound)
else:
    print("bad news")
