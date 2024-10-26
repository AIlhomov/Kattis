import datetime

day, month = map(int, input().split())

date = datetime.date(2009, month, day)

print(date.strftime("%A"))
