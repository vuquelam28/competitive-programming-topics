t = int(input())

for _ in range(t):
    n, m, k = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))
    
    s = set(range(1, n + 1))
    
    c = a.intersection(b)
    d = s.difference(a.union(b))
    
    print(len(c), len(d))