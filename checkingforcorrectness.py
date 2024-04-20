import sys

sys.set_int_max_str_digits(500000)

for line in sys.stdin:
    a, operator, b = line.split()
    a, b = int(a), int(b)
    
    if operator == '+':
        result = (a + b) % 10000
    elif operator == '*':
        result = (a * b) % 10000
    elif operator == '^':
        result = pow(a, b, 10000)

    smallest_digits = str(result)[-4:].lstrip('0') or '0'

    print(smallest_digits)