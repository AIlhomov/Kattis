def to_binary(decimal):
    binary = 0
    if decimal == 0:
        binary = 0
    else:
        binary = int(bin(decimal)[2:][::-1], 2)
    return binary

n = int(input())

answer = to_binary(n)

print(answer)