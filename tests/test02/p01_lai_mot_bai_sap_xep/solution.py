
def answer(n, ary):
    for i in range(len(ary)-1):
        if ary[i] <= ary[i+1]:
            return 'YES'
        

    return 'NO'
    
def main():
    t = int(input())
    n = [0] * t
    ary = [0] * t

    for j in range(t):
        n[j] = int(input())
        ary[j] = [int(i) for i in input().split()]
    
    for j in range(t):
        print(answer(n[j], ary[j]))

main()