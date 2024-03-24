import sys

i = 1
notes = {'A#': 'Bb', 'C#': 'Db', 'D#': 'Eb', 'F#': 'Gb', 'G#': 'Ab', 'Bb': 'A#', 'Db': 'C#', 'Eb': 'D#', 'Gb': 'F#', 'Ab': 'G#'}
for line in sys.stdin:
    s = list(map(str, line.split()))
    if not s or len(s) == 0:  
        break    
    if s[0] in notes:
        print(f'Case {i}: {notes[s[0]]} {s[1]}')
    else:
        print(f'Case {i}: UNIQUE')
    i += 1
