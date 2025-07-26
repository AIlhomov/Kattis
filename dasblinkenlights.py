p, q, s = map(int, input().split())

import math

if math.lcm(p, q) > s:
    print('no')
else:
    print('yes')