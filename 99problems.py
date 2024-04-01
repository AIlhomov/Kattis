n = int(input())

lower_99, upper_99 = n, n

while (lower_99 % 100) != 99 and (upper_99 % 100) != 99:
    if lower_99 > 1:
        lower_99 -= 1
    upper_99 += 1

if (lower_99 % 100) == 99 and (upper_99 % 100) == 99:
    print(upper_99)
elif (lower_99 % 100) == 99:
    print(lower_99)
else:
    print(upper_99)
