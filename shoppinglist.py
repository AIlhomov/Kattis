import sys

def main():
    input = sys.stdin.read
    data = input().splitlines()

    n, _ = map(int, data[0].split())
    
    shopping_list = []
    for i in range(1, n + 1):
        items = set(data[i].split())
        shopping_list.append(items)

    common_items = set.intersection(*shopping_list)

    #result:
    print(len(common_items))
    print("\n".join(sorted(common_items)))

if __name__ == "__main__":
    main()