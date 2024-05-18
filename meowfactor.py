def find_meow_factor(n):
    m = 1
    while (m ** 9) <= n:
        if n % (m ** 9) == 0:
            meow_factor = m
        m += 1
    return meow_factor

n = int(input().strip())
print(find_meow_factor(n))