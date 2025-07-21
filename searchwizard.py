def main():
    T = input().strip()
    input()
    s = input().strip()
    words = s.split()
    lenT = len(T)
    total = 0
    for word in words:
        n = len(word)
        if n < lenT:
            continue
        for start in range(n - lenT + 1):
            j = 0
            while j < lenT:
                if word[start + j] != T[j]:
                    break
                j += 1
            if j == lenT:
                total += 1
    print(total)

if __name__ == "__main__":
    main()