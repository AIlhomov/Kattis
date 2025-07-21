n = int(input())

LED = {}

for i in range(n):
    m, o = map(int,input().split())

    if o == 0:
        LED[m] = o

if len(LED) == 0:
    print(-1)
else:
    print(min(LED))

