
test_cases = int(input())

for i in range(test_cases):
    a = input()
    b = input()
    print(a)
    print(b)
    for j in range(len(a)):
        if a[j] == b[j]:
            print('.', end='')
        else:
            print('*', end='')
    print()
    print()
