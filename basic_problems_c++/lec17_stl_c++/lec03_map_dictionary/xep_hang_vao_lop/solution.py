dictionary = {}

for rep in range(0, 4):
    a = list(map(int, input().split(" ")))
    for x in a:
        if x not in dictionary:
            dictionary[x] = 1
        else:
            dictionary[x] = dictionary[x] + 1
    out = ""
    for height in range(150, 191):
        if height in dictionary:
            for i in range(0, dictionary[height]):
                out = out + str(height) + " "
    print(out)
    for height in range(150, 191):
        if height in dictionary:
            dictionary[height] = 0