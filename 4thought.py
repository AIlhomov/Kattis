m = int(input())

for i in range(m):
    n = int(input())
    
    op = ['+', '-', '*', '//']
    expressions = []
    for op1 in op:
        for op2 in op:
            for op3 in op:
                expression = f"4 {op1} 4 {op2} 4 {op3} 4"
                expressions.append(expression)
    
    found_solution = False
    for expression in expressions:
        try:
            result = eval(expression)
            if result == n:
                print(expression.replace("//", "/") + f" = {n}")
                found_solution = True
                break
        except:
            pass
    
    if not found_solution:
        print("no solution")