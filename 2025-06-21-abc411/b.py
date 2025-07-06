N = int(input())
D = list(map(int, input().split()))

for _ in range(N):
	distances = []
	c = 0
	for d in D:
		d += c
		distances.append(d)
		c = d
	if distances:
		print(*distances)
	if D:
		D.pop(0)
