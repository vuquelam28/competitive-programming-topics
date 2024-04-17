m, n = [int(v) for v in input().split()]
a = []

for i in range(m):
    tam = [int(v) for v in input().split()]
    a.append(tam)

c = 0
for j in range(n):
    if a[0][j] < 0:
        c += 1
    if a[m - 1][j] < 0:
        c += 1
for i in range(1, m - 1):
    if a[i][0] < 0:
        c += 1
    if a[i][n - 1] < 0:
        c += 1
print(c)