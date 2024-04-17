query = int(input())

for q in range(0, query):
    NR = list(map(int, input().split(' ')))
    n = NR[0]
    r = NR[1]

    mp = {}
    flag = True

    for i in range(0, r):
        inp = input()
        if inp not in mp:
            mp[inp] = 1
        else:
            mp[inp] = 2
            flag = False

    if flag:
        print("Scenario #" + str(q + 1) + ": possible")
    else:
        print("Scenario #" + str(q + 1) + ": impossible")