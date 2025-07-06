n = int(input())
a = list(input().strip())
b = list(input().strip())

for i in range(n):
    if a[i] == b[i] == 'o':
        print('Yes')
        exit()

print('No')