n = int(input())

arr = []
for _ in range(n):
    inputs = input().split()
    inputs[0] = int(inputs[0])
    if inputs[0] == 1:
        arr.append(inputs[1])
    elif inputs[0] == 2:
        print(arr[0])
        arr.pop(0)

