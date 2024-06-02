import sys

def judging(n, DOMjudge , kattis):
    DOMjudge .sort()
    kattis.sort()
    
    i, j, count = 0, 0, 0
    
    while i < n and j < n:
        if DOMjudge [i] == kattis[j]:
            count += 1
            i += 1
            j += 1
        elif DOMjudge [i] < kattis[j]:
            i += 1
        else:
            j += 1
    
    return count

def main():
    input = sys.stdin.read
    data = input().split()
    
    n = int(data[0])
    DOMjudge  = data[1:n+1]
    kattis = data[n+1:2*n+1]
    
    print(judging(n, DOMjudge , kattis))

if __name__ == "__main__":
    main()