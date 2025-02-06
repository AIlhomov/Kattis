r, n = map(int, input().split()) # r = number of rooms, n = number of rooms booked 
if r == n:
    print("too late")
else:
    booked = [int(input()) for i in range(n)]
    for i in range(1, r+1):
        if i not in booked:
            print(i)
            break