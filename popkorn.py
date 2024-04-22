n = int(input())

participants = n // 4
matches_per_group = (participants * (participants - 1)) // 2
total_matches = matches_per_group * 4
total_bags = total_matches + 3  # finals

print(total_bags + 1)