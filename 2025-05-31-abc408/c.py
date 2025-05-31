wall_count, canon_count = map(int, input().split())
intervals = [tuple(map(int, input().split())) for _ in range(canon_count)]

walls = []
for l, r in intervals:
    arr = [0] * wall_count
    for i in range(l-1, r):
        arr[i] = i+1
    walls.append(arr)

count = 0

while True:
    flat = set()
    for arr in walls:
        flat.update([x for x in arr if x != 0])
    if len(flat) != wall_count:
        print(count)
        break
    count += 1
    
    wall_nonzero = [sum(arr[i] != 0 for arr in walls) for i in range(wall_count)]
    min_nonzero = min(wall_nonzero)
    min_cols = [i for i, v in enumerate(wall_nonzero) if v == min_nonzero]
    
    target_col = min_cols[0]
    for i, arr in enumerate(walls):
        if arr[target_col] != 0:
            walls.pop(i)
            break