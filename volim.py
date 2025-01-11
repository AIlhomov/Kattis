K = int(input())
N = int(input())
time_elapsed = 0
current_player = K

for _ in range(N):
    T, Z = input().split()
    T = int(T)

    time_elapsed += T

    if time_elapsed > 210:
        break

    if Z == "T":
        current_player = current_player % 8 + 1

print(current_player)
