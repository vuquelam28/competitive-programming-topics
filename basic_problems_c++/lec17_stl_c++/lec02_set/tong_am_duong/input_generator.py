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
    tmax = 4
    vmax = 8
    ran = 10
else:
    # test case ngẫu nhiên cho sub 4
    tmax = 100
    vmax = 10 ** 4
    ran = 100

t = rand_int(1, tmax)

print(t)

for i in range(0,t):
    n = rand_int(2, vmax)
    print(n)
    
    for j in range(0,n):
        print(rand_int(-ran,ran),end = " ")
    print()