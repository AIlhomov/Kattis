import fractions as f

def fahrenheit(t):
    return f.Fraction(5, 9) * (t - 32)

temp = f.Fraction(input())
res = fahrenheit(temp)
print(f'{res.numerator}/{res.denominator}')