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
    Nmax = 10
    ValueMax = 50
else:
    # test case ngẫu nhiên cho sub 4
    Nmax = 10000
    ValueMax = 100000

query = rand_int(1, 10)
print(query)

for q in range(0, query):
    n = rand_int(1, Nmax)
    print(n)

    db = {}
    out = ""
    for i in range(0, n):
        num = 0
        flag = True
        while flag:
            num = rand_int(0, ValueMax)
            if num not in db:
                db[num] = 1
                out = out + str(num)
                if i < n - 1:
                    out = out + " "
                flag = False
    print(out)
    out = ""
    for i in range(0, n):
        num = 0
        flag = True
        while flag:
            num = rand_int(0, ValueMax)
            if num not in db:
                db[num] = 1
                out = out + str(num)
                if i < n - 1:
                    out = out + " "
                flag = False
    print(out)

