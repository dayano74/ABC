x, y = map(int, input().split())

a = [1, 2, 3, 4, 5, 6]
b = [1, 2, 3, 4, 5, 6]

count = 0

for i in a:
    for j in b:
        if i + j >= x or abs(i - j) >= y:
            count += 1

print(count / 36)