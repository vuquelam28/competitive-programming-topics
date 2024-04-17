import sys
from math import sqrt
input = lambda:sys.stdin.readline()

int_arr = lambda: list(map(int,input().split()))
str_arr = lambda: list(map(str,input().split()))
get_str = lambda: map(str,input().split())
get_int = lambda: map(int,input().split())
get_flo = lambda: map(float,input().split())

def solve(n):
    c = 0
    for i in range(1,int(sqrt(n))+1):
        if n % i  == 0:
            c += 2
    if int(sqrt(n)) * int(sqrt(n)) == n:
        c -= 1
    print(c)





# for _ in range(int(input())):
n = int(input())
solve(n)
