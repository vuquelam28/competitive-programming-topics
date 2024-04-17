m, n = [int(v) for v in input().split()]
x, y = [int(v) for v in input().split()]
a = []

for i in range(m):
    tam = [int(v) for v in input().split()]
    a.append(tam)

a[x - 1], a[y - 1] = a[y - 1], a[x - 1]

for i in range(m):
    print(*a[i])