from collections import Counter
frosh = int(input())
combinations = []
counter = 0

for i in range(frosh):
    a = list(map(int, input().split()))
    combinations.append(tuple(sorted(a)))

count = Counter(combinations)
max_count = max(count.values())

for c in count.values():
    if c == max_count:
        counter += c

print(counter)