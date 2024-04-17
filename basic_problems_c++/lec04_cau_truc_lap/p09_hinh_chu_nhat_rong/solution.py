m = int(input())
n = int(input())

for i in range(1, m + 1):
    if i == 1 or i == m:
        print("*" * n)
    else:
        if n == 1:
            print("*")
        else:
            print("*" + (n - 2) * " " + "*")
