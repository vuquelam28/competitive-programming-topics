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
    Tmax = 10
else:
    # test case ngẫu nhiên cho sub 4
    Nmax = 100
    Tmax = 100

query = rand_int(1, Tmax)
letter = "abcdefghijklmnopqrstuvwxyz"

print(query)

for q in range(0, query):
    n = rand_int(1, Nmax)
    print(n)
    for rep in range(0, n):
        first_name = ""
        last_name = ""
        for k in range(0, 10):
            first_name = first_name + letter[rand_int(0, 25)]
        for k in range(0, 10):
            last_name = last_name + letter[rand_int(0, 25)]
        print(first_name, last_name)