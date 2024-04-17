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
    query = rand_int(1, 20)
else:
    # test case ngẫu nhiên cho sub 2
    query = rand_int(20, 100000)

# print("Generating testcase #%02d" % test_number)
letters = "abcdefghijklmnopqrstuvwxyz"
previous_output = ""
print(query)
for i in range(0, query):
    output = previous_output
    flag = rand_int(0, 1)
    if flag and output != "":
        print(output)
    else:
        output = ""
        if query <= 10:
            str_len = rand_int(1, 11)
        else:
            str_len = rand_int(11, 33)
        for j in range(0, str_len):
            k = rand_int(0, 25)
            output = output + letters[k]
        print(output)
    previous_output = output
