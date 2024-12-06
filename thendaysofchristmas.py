def solve(n):
    gifts = (n * (n + 1)) // 2

    tot = 0
    for d in range(1, n + 1):
        tot += (d * (d + 1)) // 2

    return gifts, tot


def main():
    N = int(input().strip())
    gifts, tot = solve(N)
    print(gifts)
    print(tot)


if __name__ == "__main__":
    main()
