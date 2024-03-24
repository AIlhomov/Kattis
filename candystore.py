from sys import stdin

n, m = list(map(int, input().split())) 
l = []
answer = {}
for i in range(n):
    l.append(stdin.readline().split())
    key = l[i][0][0] + l[i][1][0]
    if key in answer:
        answer[key] = "ambiguous"
    else:
        answer[key] = l[i][0] + " " + l[i][1]

for i in range(m):
    q = input()
    
    if q in answer:
        print(answer[q])
    else:
        print("nobody")
    
