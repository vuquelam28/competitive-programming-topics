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
    vmin = 1
    vmax = 100
elif test_number <= 20:
    # test case ngẫu nhiên cho sub 2
    vmin = 100
    vmax = 10**10
elif test_number <= 25:
    # test case ngẫu nhiên cho sub 3
    vmin = 10**10
    vmax = 10**14
else:
    # test case ngẫu nhiên cho sub 4
    vmin = 10**14
    vmax = 10**18

a = rand_int(vmin, vmax)

print(a)