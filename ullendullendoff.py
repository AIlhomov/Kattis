n = int(input())

friends = list(map(str, input().split()))

print(friends[13 % n - 1])