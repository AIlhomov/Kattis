import sys

definitions = {}

def define(i, x):
    definitions[x] = i

def eval(x, y, z):
    if x not in definitions or z not in definitions:
        print("undefined")
    else:
        if y == "<":
            print(definitions[x] < definitions[z])
        elif y == ">":
            print(definitions[x] > definitions[z])
        elif y == "=":
            print(definitions[x] == definitions[z])

def main():
    input = sys.stdin.read().strip().split("\n")
    for line in input:
        command = line.split()
        if command[0] == "define":
            define(int(command[1]), command[2])
        elif command[0] == "eval":
            eval(command[1], command[2], command[3])

if __name__ == "__main__":
    main()