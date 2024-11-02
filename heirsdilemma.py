def valid(n):
    digits = str(n)

    if '0' in digits or len(set(digits)) != 6:
        return False
    
    for digit in digits:
        if n % int(digit) != 0:
            return False
        
    return True

def solve(l, h):
    count = 0
    for n in range(l, h + 1):
        if valid(n):
            count += 1
    return count

l, h = map(int, input().split())

print(solve(l, h))
