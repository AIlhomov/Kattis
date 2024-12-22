def main():
    n = int(input())
    cups = []
    
    for _ in range(n):
        part1, part2 = input().split()
        if part1.isdigit():
            cups.append((int(part1) // 2, part2))
        else:
            cups.append((int(part2), part1))
    
    cups.sort()
    for cup in cups:
        print(cup[1])
        
if __name__ == "__main__":
    main()
