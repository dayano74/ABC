s = list(input())

ret = []
for i in s:
    if i.isupper():
        ret.append(i)

print(''.join(ret))