def calculate_score(n, data):
    score = 0

    for i in range(1, n):
        if data[i] == data[i - 1]:
            score += 1

    print(score)

def main():
    n = int(input())
    data = [input().strip() for _ in range(n)]
    calculate_score(n, data)

if __name__ == "__main__":
    main()
