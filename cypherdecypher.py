def solve(secret, message):
    encrypted = []
    l = len(secret)

    for i, char in enumerate(message):
        num_value = ord(char) - ord('A')

        new_value = (num_value * int(secret[i % l])) % 26

        encrypted.append(chr(new_value + ord('A')))

    return ''.join(encrypted)

def main():
    secret = input().strip()
    
    n = int(input().strip())

    for _ in range(n):
        message = input().strip()
        print(solve(secret, message))

if __name__ == "__main__":
    main()
