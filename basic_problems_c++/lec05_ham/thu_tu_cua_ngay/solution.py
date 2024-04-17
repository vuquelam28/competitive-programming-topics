y = int(input())
m = int(input())
d = int(input())

def nhuan(y):
    if y % 4 == 0 and y % 100 != 0 or y % 400 == 0:
        return 1
    return 0

def ngay(y, m):
    if m == 2:
        return 28 + nhuan(y)
    if m == 4 or m == 6 or m == 9 or m == 11:
        return 30
    return 31

S = d
for i in range(1, m):
    S += ngay(y, i)

print(S)