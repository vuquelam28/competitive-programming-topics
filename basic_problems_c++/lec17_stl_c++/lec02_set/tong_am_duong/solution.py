t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    pos = []
    nev = []
    
    for i in range(len(arr)):
        if(arr[i] >= 0):
            pos.append(arr[i])
        else:
            nev.append(arr[i])
    
    print(sum(set(pos)),sum(set(nev)))