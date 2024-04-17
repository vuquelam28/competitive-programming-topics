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
    vmax = 100
    
elif test_number <= 20:
    # test case ngẫu nhiên cho sub 2
    vmax = 1000
elif test_number <= 30:
    # test case ngẫu nhiên cho sub 3
    vmax = 10000
else:
    # test case ngẫu nhiên cho sub 4
    vmax = 10**5
valid = 0
if test_number % 2 == 1:
    valid = 1
C = rand_int(1, vmax)
if valid == True:
    p = rand_int(1, int(vmax / C))
    A = rand_int(1, p * C)
    B = rand_int(A, vmax)
else:
    A = rand_int(1, vmax)
    B = rand_int(A, vmax)
print(A)
print(B)
print(C)