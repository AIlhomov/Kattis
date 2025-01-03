def cookies(a):
    return sum(a)

n = int(input())
c = list(map(int, input().split()))

print(cookies(c))