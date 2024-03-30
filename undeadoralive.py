s = input()

if ":)" in s and ":(" in s:
    print("double agent")
if ":)" in s and ":(" not in s:
    print("alive")
if ":(" in s and ":)" not in s:
    print("undead")
if ":)" not in s and ":(" not in s:
    print("machine")