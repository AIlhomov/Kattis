from builtins import max

test_cases = int(input())

for _ in range(test_cases):
    _ = input()
    n = list(map(int, input().split()))
    godzilla = n[0]
    mecha_godzilla = n[1]
    godzilla_army = list(map(int, input().split()))
    mecha_godzilla_army = list(map(int, input().split()))
    
    if max(godzilla_army) >= max(mecha_godzilla_army):
        print("Godzilla")
    elif max(godzilla_army) < max(mecha_godzilla_army):
        print("MechaGodzilla")
    else:
        print("uncertain")
