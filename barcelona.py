n, k = map(int, input().split())

luggage = list(map(int, input().split()))

try:
    if luggage[0] == k:
        print("fyrst")
        exit()
    elif luggage[1] == k:
        print("naestfyrst")
        exit()
except IndexError:
    pass

for i in range(n):
    if luggage[i] == k:
        print(i + 1, "fyrst")
        break