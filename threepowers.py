def powers_of_three(n):
    powers = [1]
    for _ in range(1, n):
        powers.append(powers[-1] * 3)
    return powers

def find_subset(n):
    subset = []
    index = 0
    n -= 1
    while n > 0:
        if n % 2 == 1:
            subset.append(index)
        index += 1
        n //= 2
    return subset

def generate_subsets(list_n):
    max_power = max(list_n).bit_length()
    powers = powers_of_three(max_power)
    
    result = []
    for i in list_n:
        subset = find_subset(i)
        result.append([powers[j] for j in subset])
    return result

def main():
    l = []
    while True:
        l.append(int(input()))
        if l[-1] == 0:
            break
    subsets = generate_subsets(l)
    
    for i in range(len(subsets)):
        if l[i] == 0:
            break
        print("{ ", end="")
        print(*subsets[i], sep = ", ", end = "")
        if len(subsets[i]) == 0:
            print("}")
        else:
            print(" }")
    
if __name__ == "__main__":
    main()