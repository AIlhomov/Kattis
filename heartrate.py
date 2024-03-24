for i in range(int(input())):
    b, p = map(float, input().split())
    bpm = 60 * b / p
    min_abpm = bpm - 60 / p
    max_abpm = bpm + 60 / p
    print(f"{min_abpm:.4f} {bpm:.4f} {max_abpm:.4f}")
    