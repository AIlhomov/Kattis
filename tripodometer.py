n = int(input())
d = list(map(int, input().split()))

total = sum(d)
sums = {total - d[i] for i in range(n)} # set comprehension

print(len(sums))
print(' '.join(map(str, sorted(sums))))
