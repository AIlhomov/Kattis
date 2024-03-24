import re

a = list(map(int, input().split()))
alphabets = []

for _ in range(a[0]):
    b = input()
    alphabets += re.findall('[a-zA-Z]', b)
if alphabets:
    print(''.join(alphabets))

            