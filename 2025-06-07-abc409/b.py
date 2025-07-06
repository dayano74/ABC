n = int(input())
a = list(map(int, input().split()))

answer = 0
for x in range(1, n+1):
    count = 0
    for num in a:
        if num >= x:
            count += 1
    
    if count >= x:
        answer = x
    else:
        break

print(answer)