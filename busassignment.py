n = int(input().strip())

curr_passengers = 0
ans = 0

for _ in range(n):
    a, b = map(int, input().split())
    curr_passengers -= a  # People getting off
    curr_passengers += b  # People getting on
    ans = max(ans, curr_passengers)

print(ans)


