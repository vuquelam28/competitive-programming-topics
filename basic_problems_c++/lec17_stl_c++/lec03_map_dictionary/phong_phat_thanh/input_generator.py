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

if test_number <= 10:
    # test case ngẫu nhiên cho sub 
    n = rand_int(1, 11)
    m = rand_int(1, 21)
else:
    # test case ngẫu nhiên cho sub 2
    n = rand_int(11, 1001)
    m = rand_int(21, 1001)

# print("Generating testcase #%02d" % test_number)
letters = "abcdefghijklmnopqrstuvwxyz"
ips = []

def get_random_string():
    res = ""
    str_len = rand_int(1, 11)
    for i in range(0, str_len):
        res = res + letters[rand_int(0, 25)]
    return res

def get_random_ip():
    res = str(rand_int(1, 256)) + "." + str(rand_int(0, 256)) + "." + str(rand_int(0, 256)) + "." + str(rand_int(0, 256))
    return res

print(n, m)
for i in range(0, n):
    server = get_random_string()
    ip = get_random_ip()
    ips.append(ip)
    print(server, ip)
for i in range(0, m):
    command = get_random_string()
    ip = ips[rand_int(0, len(ips) - 1)]
    print(command + " " + ip + ";")

