n = int(input())
tA, dA = map(int, input().split())
tB, dB = map(int, input().split())

aliceTime = 0
bobTime = 0
counter = 0

for i in range(n):
    aliceTime = tA + (tA + (dA * counter))
    bobTime = tB + (tB + (dB * counter))
    counter += 1

if aliceTime < bobTime:
    print('Alice')
elif aliceTime > bobTime:
    print('Bob')
else:
    print('=')