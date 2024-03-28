s = input()

tablet_cards = s.count('T')
compass_cards = s.count('C')
gear_cards = s.count('G')

if tablet_cards == 0 or compass_cards == 0 or gear_cards == 0:
    print(tablet_cards**2 + compass_cards**2 + gear_cards**2)

if tablet_cards > 0 and compass_cards > 0 and gear_cards > 0:
    print(tablet_cards**2 + compass_cards**2 + gear_cards**2 + 7 * min(tablet_cards, compass_cards, gear_cards))


