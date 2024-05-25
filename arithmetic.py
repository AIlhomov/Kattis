def base8_to_16(n):
    decimal = int(n, 8)
    hexadecimal = hex(decimal)[2:] 
    return hexadecimal.upper()

print(base8_to_16(input()))