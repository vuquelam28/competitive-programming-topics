import random
import string
import itertools


def rand_int(vmin, vmax):
    return random.randint(vmin, vmax)


def rand_double(vmin, vmax):
    return random.uniform(vmin, vmax)


def rand_list(len, vmin, vmax, distinct=False):
    if not distinct:
        res = []
        for i in range(0, len):
            res.append(rand_int(vmin, vmax))
        return res
    else:
        return random.sample(range(vmin, vmax + 1), len)


def rand_str(length, seed=string.ascii_lowercase):
    return "".join(random.choices(seed, k=length))


def random_combination(iterable, r):
    "Random selection from itertools.combinations(iterable, r)"
    pool = tuple(iterable)
    n = len(pool)
    indices = sorted(random.sample(range(n), r))
    return tuple(pool[i] for i in indices)


# nhập vào một số nguyên dương duy nhất là số thứ tự của test case, bắt đầu từ 1
test_number = int(input())

# print("Generating testcase #%02d" % test_number)
if test_number <= 20:
    # test case ngẫu nhiên cho sub 1
    vmin = 2 if test_number <= 10 else 10 ** 5
    vmax = 1000 if test_number <= 10 else 10 ** 5
n = rand_int(vmin, vmax)
print(n)
[print(i) for i in rand_list(n, 1, 10 ** 6)]
