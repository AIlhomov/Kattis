

def swap(a, l):
    if a == 'A':
        l[0] , l[1] = l[1], l[0]
    elif a == 'B':
        l[1] , l[2] = l[2], l[1]
    elif a == 'C':
        l[0] , l[2] = l[2], l[0]
    return l

def main():
    l = [1, 0, 0]
    for i in input():
        l = swap(i, l)
    print(l.index(1) + 1)

if __name__ == '__main__':
    main()