set_count = 1

while True:
    n = int(input())
    if n == 0:
        break
    names = [input() for _ in range(n)]

    top = []
    bottom = []

    sorted_names = sorted(names, key=len)
    for i, name in enumerate(sorted_names):
        if i % 2 == 0:
            top.append(name)
        else:
            bottom.append(name)

    print("SET", set_count)
    set_count += 1

    for name in top:
        print(name)
    for name in reversed(bottom):
        print(name)