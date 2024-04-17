db = {}
inp = list(map(int, input().split(' ')[:2]))
n = inp[0]
m = inp[1]


def get_ip(cmd):
    res = ""
    for x in cmd:
        if x != ';':
            res = res + x
    return res


for i in range(0, n):
    inp = list(map(str, input().split(' ')[:2]))
    server = inp[0]
    ip = inp[1]
    db[ip] = server

for i in range(0, m):
    inp = list(map(str, input().split(' ')[:2]))
    command = inp[0]
    ip = get_ip(inp[1])
    server = db[ip]
    log = command + " " + ip + "; #" + server
    print(log)