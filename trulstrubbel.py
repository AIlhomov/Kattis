s = input()

truls = 0
henry = 0

for char in s:
    if char == "T":
        truls += 1
    elif char == "H":
        henry += 1

    if truls >= 11 or henry >= 11:
        if abs(truls - henry) >= 2:
            truls = 0
            henry = 0

print(f"{truls}-{henry}")
