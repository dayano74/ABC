N, Q = map(int, input().split())
X = list(map(int, input().split()))

boxes = [0] * N  # 各箱のボール数
result = []

for x in X:
    if x >= 1:
        boxes[x - 1] += 1
        result.append(x)
    else:
        min_count = min(boxes)
        for i in range(N):
            if boxes[i] == min_count:
                boxes[i] += 1
                result.append(i + 1)
                break

print(*result)