a, b = map(int, input().split())

ret = a / b
x = a // b

if ret - x < 0.5:
    print(x)
else:
    print(x + 1)


