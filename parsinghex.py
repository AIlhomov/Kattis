import sys
import re

hex = re.compile(r'0x[0-9a-fA-F]+', re.IGNORECASE)

for line in sys.stdin:

    matches = hex.findall(line)

    for match in matches:
        dec = int(match, 16)
        print(match, dec)