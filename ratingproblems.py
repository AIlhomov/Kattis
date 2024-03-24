n = list(map(int, input().split()))

min_rating = 0
max_rating = 0

ratings = []

for i in range(n[1]):
    ratings.append(int(input()))
    
min_rating = (sum(ratings) + (n[1] - n[0]) * 3) /n[0]
max_rating = (sum(ratings) + (n[1] - n[0]) * (-3)) /n[0]

print(min_rating, max_rating)