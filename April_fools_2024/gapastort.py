input()
s = input()
dna_mapping = {'G': 'A', 'T': 'A', 'A': 'C', 'C': 'A'}
print(''.join(dna_mapping[char] for char in s))