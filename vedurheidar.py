
a, b = int(input()), int(input())

for _ in range(b):
    city, temperature = input().split()
    print(f"{city} {'lokud' if int(temperature) < a else 'opin'}")
