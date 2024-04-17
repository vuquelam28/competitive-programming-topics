import random
import string


def rand_int(vmin, vmax):
    return random.randint(vmin, vmax)


def rand_double(vmin, vmax):
    return random.uniform(vmin, vmax)


def rand_list(len, vmin, vmax, distinct = False):
    if not distinct:
        res = []
        for i in range(0, len):
            res.append(rand_int(vmin, vmax))
        return res
    else:
        return random.sample(range(vmin, vmax+1), len)


def rand_str(length, seed=string.ascii_lowercase):
    return ''.join(random.choices(seed, k=length))


# nhập vào một số nguyên dương duy nhất là số thứ tự của test case, bắt đầu từ 1
test_number = int(input())

# print("Generating testcase #%02d" % test_number)
if test_number <= 3:
    # test case ngẫu nhiên cho sub 1
    nmax = 10
    tmax = 3
    smax = 20
    ran = 10
else:
    # test case ngẫu nhiên cho sub 1
    nmax = 2 * 10 ** 5 - 1
    tmax = 10 ** 4 
    smax = 2 * 10 ** 5
    ran = 10 ** 9

t = rand_int(1, tmax)
print(t)

a = []
for i in range(0,t):
    a.append(1)
sn = 1 * t

for i in range(0,t):
    n = 0
    if (sn < smax):
        n = rand_int(0, min(nmax,smax - sn))
        sn += n
    print(a[i] + n)
    
    arr = rand_list(n + a[i],-ran,ran)
    for j in arr:
        if (j):
            print(j, end=" ")
        else:
            tmp = 0
            while (tmp in arr):
                tmp = rand_int(-ran,ran)
            print(tmp, end=" ")
    print()
