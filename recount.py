votes = {}
while True:
    name = input()
    if name == '***':
        break
    votes[name] = votes.get(name, 0) + 1

max_votes = max(votes.values())
winners = [name for name, votes in votes.items() if votes == max_votes]

if len(winners) > 1:
    print('Runoff!')
else:
    print(winners[0])
