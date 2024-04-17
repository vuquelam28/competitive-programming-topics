__author__ = 'Eddie'
import sys

def get_filehandler(is_file):
    if is_file:
        return open(file="data")
    else:
        import sys

        return sys.stdin


# custom starts



if __name__ == '__main__':
    fh = get_filehandler(is_file=False)
    # fh = get_filehandler(is_file=True)
    n = int(fh.readline())
    board = {}
    for _i in range(0, n):
        name, score = fh.readline().strip().split()
        previous = board.get(name, [(0, -1)])
        board[name] = previous + [(previous[-1][0] + int(score), _i)]
    final = []
    for k, v in board.items():
        final.append((k, v[-1][0]))
    final.sort(key=lambda t: t[1], reverse=True)
    m = final[0][1]
    names = []
    for pairs in final:
        if pairs[1] == m:
            names.append(pairs[0])
        else:
            break
    if len(names) == 1:
        print(names[0])
    else:
        earlist = (None, 100000)
        for name in names:
            for v in board[name]:
                if not v[0] < m:
                    if v[1] < earlist[1]:
                        earlist = (name, v[1])
                    break
        print(earlist[0])


