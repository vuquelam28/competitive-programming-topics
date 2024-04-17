test = int(input())
for _ in range(test):
    n = int(input())
    arr = list(map(int, input().split()))
    s = sum(arr)
    d = s // (n - 1)
    if s % (n - 1) == 0:
        d -= 1
    print((n - 1) * max(max(arr), d + 1) - s)