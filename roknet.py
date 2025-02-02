n = int(input())
val = {}
uttaks = []

for _ in range(n):
    parts = input().split()
    if parts[0] == 'INNTAK':
        name = parts[1]
        value = parts[2] == 'SATT'
        val[name] = value
    elif parts[0] == 'EKKI':
        input_name = parts[1]
        name = parts[2]
        input_val = val[input_name]
        val[name] = not input_val
    elif parts[0] == 'OG':
        input1 = parts[1]
        input2 = parts[2]
        name = parts[3]
        val1 = val[input1]
        val2 = val[input2]
        val[name] = val1 and val2
    elif parts[0] == 'EDA':
        input1 = parts[1]
        input2 = parts[2]
        name = parts[3]
        val1 = val[input1]
        val2 = val[input2]
        val[name] = val1 or val2
    elif parts[0] == 'UTTAK':
        input_name = parts[1]
        uttaks.append(input_name)

for input_name in uttaks:
    value = val[input_name]
    print(f"{input_name} {'SATT' if value else 'OSATT'}")