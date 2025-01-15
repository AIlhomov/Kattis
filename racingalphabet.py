import math

def calculate_time(aphorism):
    char_to_position = {chr(i + 65): i for i in range(26)}  # 'A' to 'Z'
    char_to_position[' '] = 26
    char_to_position["'"] = 27

    circumference = math.pi * 60 
    distance_per_step = circumference / 28
    speed = 15

    current_position = char_to_position[aphorism[0]]
    total_time = 0

    for char in aphorism:
        target_position = char_to_position[char]
        step_distance = min(abs(target_position - current_position), 28 - abs(target_position - current_position))
        total_time += (step_distance * distance_per_step) / speed + 1
        current_position = target_position

    return total_time

N = int(input())
res = []

for _ in range(N):
    aphorism = input().strip()
    res.append(f"{calculate_time(aphorism):.6f}")

print("\n".join(res))
