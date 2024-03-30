n = int(input())
count = 0
for i in range(n):
    shade = input().lower()
    
    if "pink" in shade or "rose" in shade:
        count += 1
if count == 0:
    print("I must watch Star Wars with my daughter")
else:
    print(count)