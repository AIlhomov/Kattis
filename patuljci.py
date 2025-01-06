numbers = [int(input()) for _ in range(9)]

total_sum = sum(numbers)

found = False
for i in range(9):
    for j in range(i + 1, 9):
        if total_sum - (numbers[i] + numbers[j]) == 100:
            excluded_numbers = {numbers[i], numbers[j]}
            found = True
            break
    if found:
        break

for num in numbers:
    if num not in excluded_numbers:
        print(num)
