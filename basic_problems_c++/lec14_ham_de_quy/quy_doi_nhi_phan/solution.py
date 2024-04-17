def binary(a):
    if(n != 0 and a == 0): return None
    if((n == 0 and a == 0) or a == 1): 
        print(a % 2, end = "")
        return None
    binary(a // 2)
    print(a % 2, end = "")


n = int(input())
binary(n)