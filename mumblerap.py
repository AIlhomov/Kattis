import re

input()
s = input()

numbers = re.findall(r'\d+', s)
numbers = [int(num) for num in numbers]  

print(max(numbers))
    