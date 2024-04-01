def digit_product(x):
    while x > 9:
        product = 1
        for digit in str(x):
            if digit != '0': # Skip 0
                product *= int(digit)
        x = product
    return x

x = int(input())

print(digit_product(x))
