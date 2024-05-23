def octalToDecimal(num):
    try:
        if any(c not in '01234567' for c in str(num)):
            return "0"
        return str(int(str(num), 8))
    except ValueError:
        return "0"
def hexToDecimal(num):
    try:
        return str(int(str(num), 16))
    except ValueError:
        return "0"

p = int(input())

k = [input().split() for _ in range(p)]

print("\n".join([str(i+1) + " " + octalToDecimal(k[i][1]) + " " + str(int(k[i][1])).strip() + " " + hexToDecimal(k[i][1]) for i in range(p)]))