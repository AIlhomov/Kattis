import math

def prime():
    count = 0
    num = 2
    while count < 100:
        if all(num % i != 0 for i in range(2, int(math.sqrt(num)) + 1)):
            print(num)
            count += 1
        num += 1

if __name__ == "__main__":
    prime()