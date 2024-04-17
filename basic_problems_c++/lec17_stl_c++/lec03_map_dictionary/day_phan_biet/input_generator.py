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
    Nmax = rand_int(1, 10)
else:
    # test case ngẫu nhiên cho sub 4
    Nmax = rand_int(11, 200000)

print(Nmax)
out = ""
for i in range(0, Nmax):
    if test_number <= 5:
        a = rand_int(1, 20)
    else:
        a = rand_int(21, 100000000)
    out = out + str(a) + " "
print(out) 