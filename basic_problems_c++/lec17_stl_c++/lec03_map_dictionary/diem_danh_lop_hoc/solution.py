query = int(input())

name_list = {}

for q in range(0, query):
    n = int(input())
    names = []
    for i in range(0, n):
        inp = list(map(str, input().split(' ')))
        names.append(inp)
        first_name = inp[0]
        last_name = inp[1]
        if first_name not in name_list:
            name_list[first_name] = 1
        else:
            name_list[first_name] = name_list[first_name] + 1
    
    for name in names:
        if name_list[name[0]] > 1:
            print(name[0] + " " + name[1])
        else:
            print(name[0])