n = int(input())
peashooters = list(map(int, input().split()))

low, high = 1, max(peashooters) + 1

while low < high:
    mid = (low + high) // 2
    if all(mid <= p for p in peashooters):
        low = mid + 1
    else:
        high = mid

print(low)