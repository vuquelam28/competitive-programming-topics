n,a,b = map(int,input().split())
s = list(map(int,input().split()))
s1 = s[1:]
s1.sort()
x = sum(s)
while(a*s[0]<b*x):
    x-=s1.pop()
print(n - len(s1)-1)