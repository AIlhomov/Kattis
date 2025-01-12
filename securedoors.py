n = int(input())

people = set()

for _ in range(n):
    action, name = input().split()
    if action == "entry":
        if name in people:
            print(name, "entered (ANOMALY)")
        else:
            people.add(name)
            print(name, "entered")
    else:
        if name in people:
            people.remove(name)
            print(name, "exited")
        else:
            print(name, "exited (ANOMALY)")

# The code above is a simple implementation of a set. The set is used to store the names of people who are currently inside the building.