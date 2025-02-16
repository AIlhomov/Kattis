N = int(input().strip())
before = input().strip()
after = input().strip()

expected = ''.join('1' if b == '0' else '0' for b in before) if N % 2 else before

if expected == after:
    print("Deletion succeeded")
else:
    print("Deletion failed")