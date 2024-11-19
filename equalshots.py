def compare_shots(shot1, shot2):
    total1 = sum(v * (c / 100) for v, c in shot1)

    total2 = sum(v * (c / 100) for v, c in shot2)

    if abs(total1 - total2) < 1e-6:
        return "same"
    else:
        return "different"

a, b = map(int, input().split())

shot1 = [list(map(int, input().split())) for _ in range(a)]
shot2 = [list(map(int, input().split())) for _ in range(b)]

print(compare_shots(shot1, shot2))
