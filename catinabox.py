h, w, l, c = map(int, input().split())

volume = h * w * l

if volume > c:
    print('SO MUCH SPACE')
elif volume < c:
    print('TOO TIGHT')
else:
    print('COZY')