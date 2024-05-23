t, n = map(int, input().split())
l = list(map(int, input().split()))

l.sort()

res = 0 
songs = 0

for duration in l:
    if res + duration <= t * 60:  # Enough time
        res += duration
        songs += 1
    else:
        break  # Not enough time

print(res)