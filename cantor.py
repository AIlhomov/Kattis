def ternary(x):
    if x == 0:
        return "0"
    ternary = []
    while x > 0 and len(ternary) < 20:  # len, preventing infinite loop (repeating fractions)
        x *= 3
        digit = int(x)
        ternary.append(str(digit))
        x -= digit
    return ''.join(ternary)

def cantor_set(x):
    ter = ternary(x)
    if '1' in ter:
        return "NON-MEMBER"
    return "MEMBER"

def main():
    while True:
        x = input().strip()
        if x == "END":
            break
        x = float(x)
        print(cantor_set(x))

if __name__ == "__main__":
    main()