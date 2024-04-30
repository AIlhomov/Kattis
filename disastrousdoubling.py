n = int(input())
b = list(map(int, input().split()))

bacteria = 1

for i in range(n):
    bacteria *= 2 

    if bacteria >= b[i]:
        bacteria -= b[i]
    else:
        print("error")
        exit(0)

print(bacteria % (10**9 + 7))  
