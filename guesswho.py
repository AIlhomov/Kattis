def guess_who():
    N, M, Q = map(int, input().split())

    characters = [input().strip() for _ in range(N)]

    valid = set(range(N))

    for _ in range(Q):
        A, response = input().split()
        A = int(A) - 1

        valid = {i for i in valid if characters[i][A] == response}

    if len(valid) == 1:
        print("unique")
        print(next(iter(valid)) + 1)
    else:
        print("ambiguous")
        print(len(valid))

if __name__ == "__main__":
    guess_who()
