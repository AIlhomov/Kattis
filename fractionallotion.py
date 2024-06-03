import sys

def solve(n):
    count = 0
    for k in range(1, n + 1):
        if n * n % k == 0:
            count += 1
    return count

def main():
    input = sys.stdin.read().strip().split()
    for line in input:
        n = int(line.split('/')[1])
        print(solve(n))

if __name__ == "__main__":
    main()