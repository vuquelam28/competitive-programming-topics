import sys
input = sys.stdin.readline

def positive_dist(x, n, k, last):
    cur = n - 1
    total = 0
    while cur >= 0 and x[cur] > 0:
        total += 2*x[cur]
        cur -= k
    if last and x[-1] > 0:
        total -= x[-1]
    return total

def negative_dist(x, n, k, last):
    cur = 0
    total = 0
    while cur < n and x[cur] < 0:
        total -= 2*(x[cur])
        cur += k
    if last and x[0] < 0:
        total += x[0]
    return total

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    x = [int(i) for i in input().split()]
    x.sort()
    if x[0] >= 0:
        print(positive_dist(x, n, k, True))
    elif x[-1] <= 0:
        print(negative_dist(x, n, k, True))
    elif abs(x[0]) > abs(x[-1]):
        print(positive_dist(x, n, k, False) + negative_dist(x, n, k, True))
    else:
        print(positive_dist(x, n, k, True) + negative_dist(x, n, k, False))
