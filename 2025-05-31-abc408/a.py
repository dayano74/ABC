n, s = map(int, input().split())
t = list(map(int, input().split()))


for i in range(n):
    if i == 0 and t[i] >= s + 0.5:
        print("No")
        exit()
    if t[i] - t[i - 1] >= s + 0.5:
        print("No")
        exit()
        

print("Yes")
