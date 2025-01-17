N = int(input())
teams = [input().strip() for _ in range(N)]

awarded_uni = set()
awarded_teams = []

for team in teams:
    uni, team_name = team.split(maxsplit=1)
    if uni not in awarded_uni:
        awarded_uni.add(uni)
        awarded_teams.append(team)
        if len(awarded_teams) == 12:
            break

print("\n".join(awarded_teams))
