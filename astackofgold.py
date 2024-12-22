def solve(w, s):
    tungsten = sum(i * 29260 for i in range(1, s + 1))
    
    diff = w - tungsten
        
    return diff // 110

w, s = map(int, input().split())
print(solve(w, s))
