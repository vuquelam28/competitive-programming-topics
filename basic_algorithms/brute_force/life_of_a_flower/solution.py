for _ in range(int(input())):
    n = int(input())
    arr = [int(x) for x in input().split()]
    ans = 1
    ok = True
    for i in range(n):
        if(i == 0):
            if(arr[i] == 1):
                ans += 1
        else:
            if(arr[i] == 0 and arr[i-1] == 0):
                ok = False
            if(arr[i] == 1 and arr[i-1] == 1):
                ans += 5
            elif(arr[i] == 1):
                ans += 1
    if(not ok):
        ans = -1
    print(ans)