p = int(input())

for i in range(p):
    k, n = map(int, input().split())
    
    print(f'{k} {n*(n+1)//2} {n**2} {n*(n+1)}')