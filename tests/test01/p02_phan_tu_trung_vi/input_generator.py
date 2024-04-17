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
    Nmax = 20
    Kmax = 20
    Amax = 30
else:
    # test case ngẫu nhiên cho sub 2
    Nmax = 200000
    Kmax = 1000000000
    Amax = 1000000000

flag = True
n = rand_int(1, Nmax)
while flag:
    if n % 2 != 0:
        flag = False
    else:
        flag = True
        n = rand_int(1, Nmax)

k = rand_int(1, Kmax)

print(n, k)

out = ""
for i in range(0, n):
    out = out + str(rand_int(1, Amax))
    if i < n - 1:
        out = out + " "
print(out)