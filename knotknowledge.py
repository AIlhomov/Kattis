_ = int(input())

x = list(map(int, input().split()))
y = list(map(int, input().split()))

missing_values = [val for val in x if val not in y]

for i in range(len(missing_values)):
    print(missing_values[i], end=" ")
