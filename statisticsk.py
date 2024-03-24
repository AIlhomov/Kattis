
i = 1
while True:
    try:
        inputs = list(map(int, input().split()))
        inputs = inputs[1:]  # Ignore the first input
        print(f"Case {i}: {min(inputs)} {max(inputs)} {max(inputs) - min(inputs)}")
        i += 1
    except EOFError:
        break
