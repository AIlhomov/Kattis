def simplicity(s):
    freq = {}
    for l in s:
        freq[l] = freq.get(l, 0) + 1
    
    sorted_freq = sorted(freq.values(), reverse=True)
    
    letters = sum(sorted_freq[2:]) if len(sorted_freq) > 2 else 0
    
    return letters

s = input()

ans = simplicity(s)

print(ans)