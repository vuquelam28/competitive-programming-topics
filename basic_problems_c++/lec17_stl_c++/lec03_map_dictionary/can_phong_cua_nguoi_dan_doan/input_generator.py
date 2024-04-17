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
     kmax = 6
     gmax = 8
else:
    # test case ngẫu nhiên cho sub 1 
    kmax = 10 ** 3 - 1
    gmax = 10 ** 3

k = rand_int(2, kmax)
groups = rand_int(1, gmax)
ans = rand_int(1,groups)
m = k * groups
a = []
tmp = 1
cnt = 0

print(k)

for i in range(0,m):
    if (tmp == ans):
        tmp += 1
    a.append(tmp)
    cnt += 1
    if (cnt == k):
        tmp += 1
        cnt = 0
a.append(ans)

for i in range(0,m):
    x = rand_int(0,m)
    a[i], a[x] = a[x], a[i]

for i in range(0,m + 1):
    print(a[i],end = " ")