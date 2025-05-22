n, k = map(int, input().split())
nums = list(map(int, input().split()))

result = 1
for num in nums:
    if result * num >= 10 ** k:
        result = 1
    else:
        result = result * num
    # print("DEBUG: "+str(result))
print(result)