n, m = map(int, input().split())
tol = (n * (n + 1)) // 2
cur_m = m % tol
i = 1
while cur_m >= i:
    cur_m -= i
    i += 1
print(cur_m)
