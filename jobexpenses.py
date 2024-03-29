input()
k = list(map(int, input().split()))
print(abs(sum([x for x in k if x < 0])))    