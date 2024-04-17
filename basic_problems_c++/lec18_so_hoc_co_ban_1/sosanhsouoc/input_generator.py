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
if test_number == 1:
    print(10000)
    for i in range(1,10001):
        print(i)
    exit()
if test_number == 5:
    print(100)
    for i in range(0,100):
        print(1000000000000-i)
    exit()
if test_number == 6:
    value = 1000000000000
if test_number == 7:
    value = 999999999999
if test_number == 8:
    value = 999999999998
if test_number == 2:
    value = 10000
if test_number == 3:
    value = 9999
if test_number == 4:
    value = 9998

if test_number <= 4:
    # test case ngẫu nhiên cho sub 1
    print(10000)
    for i in range(1,10001):
        print(value)
elif test_number <= 8:
    print(100)
    for i in range(1,101):
        print(value)
else:
    print(200000)
    for i in range(0,200000):
        print(rand_int(1,10**18))
