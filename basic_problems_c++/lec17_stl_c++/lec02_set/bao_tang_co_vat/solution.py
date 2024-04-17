n,c = map(int,input().split())
arr = input()

a = len(set(arr))
ans = c - min(c,a)

print(ans)