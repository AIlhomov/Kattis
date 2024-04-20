import sys
import math
from collections import Counter
from functools import reduce

def anagram(word):
    return math.factorial(len(word)) // reduce(lambda x, y: x * math.factorial(y), Counter(word).values(), 1) 

for line in sys.stdin:
    word = line.strip()
    print(int(anagram(word)))