def solve(N):
    group_3 = N // 3
    rem = N % 3
    
    if rem == 1:
        group_3 -= 1
        rem += 3
        
    group_2 = (N - group_3 * 3) // 2
    print(group_3 + group_2)
    print("3 " * group_3 + "2 " * group_2)
    
    if rem == 3:
        print("3")
    else:
        print()
    

N = int(input())
solve(N)
