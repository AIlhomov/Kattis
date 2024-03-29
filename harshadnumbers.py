import re

n = input()
a = re.findall('.', n)

num = int(n)
while True:
    digits_sum = sum(int(digit) for digit in str(num))
    if num % digits_sum == 0:
        print(num)
        break
    num += 1