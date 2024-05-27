import sys, re

def number_to_words(number):
    words = ["", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
            "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
            "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"]
    
    if number >= 1000: # Start number
        number -= 1000
        if number == 0:
            return "Zero" # My only edge case
        if number < 20:
            return words[number].capitalize() # Capitalize the first letter
        else:
            b = number - 20
            r = b % 10
            b //= 10
            if r == 0:
                return words[20+b].capitalize()
            return words[20+b].capitalize() + "-" + words[r]
    if number == 0:
        return "zero"
    elif number < 20:
        return words[number]
    elif number < 100: # between 20 and 99
        b = number - 20
        r = b % 10
        b //= 10
        if r == 0:
            return words[20+b]
        return words[20+b] + "-" + words[r]
    return number
    
def run(line, digits):
    i = 0
    for word in line.split():
        if word.isdigit():
            print(number_to_words(digits[i]), end=" ")
            i += 1
        else:
            print(word, end=" ")
    print()

def main():
    for line in sys.stdin:
        if not line:
            break
        
        digits = re.findall(r'(?<!\S)\d+(?!\S)', line)
        digits = [int(num) for num in digits]
        try:
            if line.startswith(str(digits[0])):
                digits[0] = digits[0] + 1000
            run(line, digits)
        except Exception:
            print(line, end="") # No digits in the line

if __name__ == "__main__":
    main()