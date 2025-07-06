n, q = map(int, input().split())
B = list(map(int, input().split()))

for i in B:
	if i < 0:
		print(0)
		continue
	
	ans = 0
	for j in range(n):
		if B[j] >= i:
			ans += 1
	
	print(ans)	