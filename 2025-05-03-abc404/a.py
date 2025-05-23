s = list(input())

k = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
for i in k:
    if i not in s:
        print(i)
        break

# better code by gpt-4.1 
#
# import string
#
# s = input()
# for c in string.ascii_lowercase:
#     if c not in s:
#         print(c)
#         break