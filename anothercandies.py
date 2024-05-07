t = int(input())

while t > 0:
    input()
    n = int(input())
    sum = 0
    for i in range(n):
        sum += int(input())
    if sum % n == 0:
        print("YES")
    else:
        print("NO")
    t -= 1