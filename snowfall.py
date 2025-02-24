def snow_depth_after_n_days():
    n = int(input().strip())

    snow_depth = 0

    for _ in range(n):
        t, a = map(int, input().split())

        if t == 0:
            snow_depth += a
        else:
            snow_depth = max(0, snow_depth - a)

    print(snow_depth)

if __name__ == "__main__":
    snow_depth_after_n_days()
