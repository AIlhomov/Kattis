test_cases = int(input())
counter = 1
for i in range(test_cases):
    input()
    guests_list = list(map(int, input().split()))
    for j in guests_list:
        if guests_list.count(j) == 1:
            print(f'Case #{counter}: {(j)}')
            break
    counter += 1