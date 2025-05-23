def rotate90(grid):
    n = len(grid)
    new_grid = [[None]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            new_grid[i][j] = grid[n - j - 1][i]
    return new_grid

def count_diff(s, t):
    n = len(s)
    count = 0
    for i in range(n):
        for j in range(n):
            if s[i][j] != t[i][j]:
                count += 1
    return count

def main():
    n = int(input())
    s = [list(input().strip()) for _ in range(n)]
    t = [list(input().strip()) for _ in range(n)]

    min_ops = float('inf')
    rotated_s = s
    for rot in range(4):
        diff = count_diff(rotated_s, t)
        ops = diff + rot
        min_ops = min(min_ops, ops)
        rotated_s = rotate90(rotated_s)

    print(min_ops)

if __name__ == "__main__":
    main()
    

# official solution

N = int(input())
S = [input() for _ in range(N)]
T = [input() for _ in range(N)]

def right_rot90(S):
  return list(zip(*S[::-1]))

def count_diff(S,T):
  return sum([1 for si,ti in zip(S,T) for sij,tij in zip(si,ti) if sij!=tij])

ans = 10**9
for rot_count in range(4):
  ans = min(ans, count_diff(S,T)+rot_count)
  S = right_rot90(S)

print(ans)
