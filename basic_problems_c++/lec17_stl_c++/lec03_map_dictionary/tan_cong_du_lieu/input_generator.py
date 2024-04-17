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
if test_number <= 10:
    # test case ngẫu nhiên cho sub 1
    T = rand_int(1, 11)
    Nmax = 11
    Mmax = 21
else:
    # test case ngẫu nhiên cho sub 2
    T = rand_int(11, 100)
    Nmax = 10000
    Mmax = 100000

print(T)
for i in range(0, T):
    n = rand_int(1, Nmax)
    m = rand_int(3, Mmax)
    print(n, m)
    for j in range(0, m):
        k = rand_int(1, n + 1)
        code = rand_int(1000, 10000)
        print(k, code)
