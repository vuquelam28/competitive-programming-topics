t = int(input())

for _ in range(t):
    n = int(input())
    chocolates = list(map(int,input().split()))
    perfect_gift = len(set(chocolates))
    print(perfect_gift)