n = int(input())
a = list(map(int, input().split()))

result = 0
for i in range(n):
    if (i + 1) % 2 == 1:
        result += a[i]

print(result)