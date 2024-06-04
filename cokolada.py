def choco_bar(k):
    bar_size = 1
    pow_count = 0

    while bar_size < k:
        bar_size *= 2
        pow_count += 1

    diff = bar_size - k

    bit = []
    while diff > 0:
        if diff % 2 == 0:
            bit.append(0)
        else:
            bit.append(1)
        diff >>= 1

    while len(bit) < pow_count:
        bit.append(0)

    bit.reverse()

    n = 0
    for i, bit in enumerate(bit):
        if bit == 1:
            n = i + 1

    return bar_size, n

k = int(input().strip())

x, y = choco_bar(k)

print(x, y)
