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
    vmax = 250
elif test_number <= 10:
    # test case ngẫu nhiên cho sub 2
    vmin = 251
    vmax = 500
elif test_number <= 15:
    # test case ngẫu nhiên cho sub 3
    vmin = 501
    vmax = 750
else:
    # test case ngẫu nhiên cho sub 4
    vmin = 751
    vmax = 999

n =  rand_int(vmin, vmax)
a = [0] * n
for i in range(n):
    a[i] = rand_int(1, 100)

print(n)
print(*a)

