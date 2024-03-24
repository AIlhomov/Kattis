def find_champernowne_position(N_str):
    champernowne, k = "", 0
    while len(champernowne) < len(N_str):
        k += 1
        champernowne += str(k)
    
    if champernowne.startswith(N_str):
        return k
    else:
        return -1

N_str = input().strip()  
print(find_champernowne_position(N_str))
