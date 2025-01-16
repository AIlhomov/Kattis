n = int(input())

pieces = list(map(int, input().split()))

pieces.sort(reverse=True)

alice = pieces[::2]
bob = pieces[1::2]

print(sum(alice), sum(bob))
