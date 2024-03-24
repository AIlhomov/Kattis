
count = 1
while True:
    zoo = []
    result = {}
    test_cases = int(input())
    if test_cases == 0:
        break
    for i in range(test_cases):
        s = input()
        words = s.split()
        zoo.append(words[-1].lower())
    
    print(f'List {count}:')
    
    for i in range(len(zoo)):
        result[zoo[i]] = zoo.count(zoo[i])
        
    sorted(result.items(), key=lambda x: x[1], reverse=True)
    for key, value in sorted(result.items()):
        print(f'{key} | {value}')
    count += 1