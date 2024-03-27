gunnar = list(map(int, input().split()))
emma = list(map(int, input().split()))

if sum(gunnar) > sum(emma):
    print('Gunnar')
elif sum(gunnar) < sum(emma):
    print('Emma')
else:
    print('Tie')