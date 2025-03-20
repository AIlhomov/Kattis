def luhn_checksum(card_number):
    def digits_of(n):
        return [int(d) for d in str(n)]
    digits = digits_of(card_number)
    odd_digits = digits[-1::-2]
    even_digits = digits[-2::-2]
    checksum = 0
    checksum += sum(odd_digits)
    for d in even_digits:
        checksum += sum(digits_of(d*2))
    return checksum % 10

def is_luhn_valid(card_number):
    return luhn_checksum(card_number) == 0

def main():
    n = int(input())
    while n > 0:
        n -= 1
        card_number = input()
        print("PASS" if is_luhn_valid(card_number) else "FAIL")

if __name__ == "__main__":
    main()