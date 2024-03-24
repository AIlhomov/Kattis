n = int(input())
answer = [(i+1, j+1, value) for i in range(n) for j, value in enumerate(map(int, input().split())) if value != -1]
print(len(answer))
for ans in answer:
    print(*ans)
