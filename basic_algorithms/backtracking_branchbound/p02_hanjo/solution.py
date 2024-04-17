H, W, A, B = map(int, input().split())
used = [[False] * W for i in range(H)]


def dfs(i, j, a, b):
    if (a < 0 or b < 0):
        return 0
    if j == W:
        j = 0
        i += 1
    if i == H:
        return 1
    if used[i][j]:
        return dfs(i, j + 1, a, b)
    res = 0
    used[i][j] = True
    res += dfs(i, j + 1, a, b - 1)
    if j + 1 < W and not used[i][j + 1]:
        used[i][j + 1] = True
        res += dfs(i, j + 1, a-1, b)
        used[i][j + 1] = False
    if i + 1 < H and not used[i + 1][j]:
        used[i + 1][j] = True
        res += dfs(i, j + 1, a-1, b)
        used[i + 1][j] = False
    used[i][j] = False
    return res


ans = dfs(0, 0, A, B)
print(ans)
