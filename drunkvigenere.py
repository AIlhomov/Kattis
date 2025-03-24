def solve(encrypted_message, key):
    def shift_char(c, shift, forward=True):
        if not forward:
            shift = -shift
        return chr((ord(c) - ord('A') + shift) % 26 + ord('A'))

    decrypted_message = []
    for i in range(len(encrypted_message)):
        shift = ord(key[i]) - ord('A')
        if i % 2 == 0:  # Even-indexed shift backwards
            decrypted_message.append(shift_char(encrypted_message[i], shift, forward=False))
        else:  # Odd-indexed shift forwards
            decrypted_message.append(shift_char(encrypted_message[i], shift, forward=True))

    return ''.join(decrypted_message)

encrypted_message = input().strip()
key = input().strip()

print(solve(encrypted_message, key))