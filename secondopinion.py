total_seconds_str = input()  # Do not change this line.

# Convert to hours, minutes and seconds.

hours = int(total_seconds_str) // 3600
minutes = (int(total_seconds_str) % 3600) // 60
seconds = (int(total_seconds_str) % 3600) % 60

print(hours, ":", minutes, ":", seconds)  # Do not change this line.
