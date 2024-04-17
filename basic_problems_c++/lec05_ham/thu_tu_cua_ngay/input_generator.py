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
if test_number <= 5:
    # test case ngẫu nhiên cho sub 1
    vmax = 100
elif test_number <= 10:
    # test case ngẫu nhiên cho sub 2
    vmax = 1000
elif test_number <= 15:
    # test case ngẫu nhiên cho sub 3
    vmax = 100000
else:
    # test case ngẫu nhiên cho sub 4
    vmax = 10 ** 6 - 1

def nhuan(y):
    if y % 4 == 0 and y % 100 != 0 or y % 400 == 0:
        return True
    return False

y = rand_int(1, vmax)
m = rand_int(1, 12)
if m == 2:
    if nhuan(y):
        d = rand_int(1, 29)
    else:
        d = rand_int(1, 28)
elif m == 4 or m == 6 or m == 9 or m == 11:
    d = rand_int(1, 30)
else:
    d = rand_int(1, 31)

print(y)
print(m)
print(d)