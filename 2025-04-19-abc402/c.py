n, m = map(int, input().split())
a = []
idx = [[] for _ in range(n)]
cnt = [0] * m

for i in range(m):
    line = list(map(int, input().split()))
    k = line[0]
    cnt[i] = k
    values = [x - 1 for x in line[1:]]
    a.append(values)
    for e in values:
        idx[e].append(i)

ans = 0
b_list = list(map(lambda x: int(x) - 1, input().split()))
for i in range(n):
    b = b_list[i]
    for id in idx[b]:
        cnt[id] -= 1
        if cnt[id] == 0:
            ans += 1
    print(ans)
