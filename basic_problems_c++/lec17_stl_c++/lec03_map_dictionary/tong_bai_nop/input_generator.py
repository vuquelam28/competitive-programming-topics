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
    Cmax = 20
else:
    # test case ngẫu nhiên cho sub 4
    Nmax = 10000
    Cmax = 500000000

query = rand_int(1, 10)

letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

print(query)

for q in range(0, query):
    n = rand_int(1, Nmax)
    print(n)
    
    name_list = []
    cur_name_list = {}

    for rep in range(0, 3):
        for i in range(0, n):

            while True:
                name = ""
                flag = rand_int(0, 1)
                if flag == 1 and len(name_list) > 0:
                    name = name_list[rand_int(0, len(name_list) - 1)]
                else:
                    for j in range(0, rand_int(1, 8)):
                        name = name + letter[rand_int(0, 25)]

                if name not in cur_name_list:
                    cur_name_list[name] = 1
                    break

            sol = rand_int(1, Cmax)

            print(name, sol)

            name_list.append(name)
        
        cur_name_list.clear()