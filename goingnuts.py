def nearest_power_of_2(n):
    '''
    This function finds the nearest power of 2 to a given number 'n'.
    If the number is a power of two it returns the same number, otherwise, it
    computes the powers less than and more than 'n' and returns the nearest one.
    '''
    # Handling 0 and negative numbers exclusively
    if n <= 0:
        raise ValueError('Number must be positive')
    
    # Initialize your power variables
    power_lower = 0
    power_higher = 0
    
    # Start with power of 0 and go up
    i = 0
    while True:
        # Calculate the current power of 2
        current_power = 2 ** i
        
        # If the current power is greater than 'n', record the higher power and break
        if current_power > n:
            power_higher = current_power
            break
        else:
            # Update the lower power
            power_lower = current_power
        
        # Move onto the next power of 2
        i += 1
    
    # Calculate which power is closer to 'n'
    # If the difference between 'n' and lower power is lesser or equal, return lower power
    if n - power_lower <= power_higher - n:
        return power_lower
    else:
        return power_lower

try:
    n = int(input())
    nearest_power = nearest_power_of_2(n)
    
    if nearest_power == n:
        print(1)
    else:
        count = 1
        while nearest_power < n:
            n -= nearest_power
            nearest_power = nearest_power_of_2(n)
            count += 1
            if nearest_power == n:
                print(count)
                break
        
    
except ValueError as ve:
    print(ve)