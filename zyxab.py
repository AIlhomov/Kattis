def is_valid_name(name):
    return len(name) >= 5 and len(name) == len(set(name))

def find_best_name(names):
    
    valid_names = [name for name in names if is_valid_name(name)]
    
    valid_names.sort(key=lambda name: (-len(name), name))
    
    if valid_names:
        return valid_names[-1]
    else:
        return "Neibb"
    


n = int(input())

names = [input().strip() for _ in range(n)]

print(find_best_name(names))

