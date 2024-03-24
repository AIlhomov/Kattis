a = int(input())
contains = {"keys", "phone", "wallet"}
have = {input() for _ in range(a)}
missing = contains - have
if len(missing) == 0:
    print("ready")
else:
    print("\n".join(missing))
