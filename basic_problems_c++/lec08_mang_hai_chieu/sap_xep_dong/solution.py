m, n = [int(v) for v in input().split()]
a = []

for i in range(m):
    tam = [int(v) for v in input().split()]
    a.append(tam)

for i in range(m):
    for j in range(i + 1, m):
        if sum(a[i]) > sum(a[j]):
            a[i], a[j] = a[j], a[i]

for i in range(m):
    print(*a[i])
