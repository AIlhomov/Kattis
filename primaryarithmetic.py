
while True:
    a, b = map(int, input().split())
    
    if a == 0 and b == 0:
        break
    
    carry = 0
    carry_operations = 0
    
    while a > 0 or b > 0:
        carry += a % 10 + b % 10
        a //= 10
        b //= 10
        
        if carry >= 10:
            carry_operations += 1
            carry = 1
        else:
            carry = 0
    
    if carry_operations == 0:
        print("No carry operation.")
    elif carry_operations == 1:
        print("1 carry operation.")
    else:
        print(f"{carry_operations} carry operations.")