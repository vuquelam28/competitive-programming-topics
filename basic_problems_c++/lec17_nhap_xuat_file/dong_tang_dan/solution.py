m, n, k = [int(v) for v in input().split()]
a = []

for i in range(m):
    tam = [int(v) for v in input().split()]
    a.append(tam)

def check(m, n, k, a):
    kt = True
    if n == 1:
        return False
    for j in range(1, n):
        if a[k - 1][j - 1] >= a[k - 1][j]:
            kt = False
            break
    return kt
if check(m, n, k, a):
    print("YES")
else:
    print("NO")
