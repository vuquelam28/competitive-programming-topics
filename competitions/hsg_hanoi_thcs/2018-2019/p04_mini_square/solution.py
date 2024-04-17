import sys


def get_sum(x1, y1, x2, y2, sum):
    return sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1]


def create_table(m, n, a, min_value):
    s = [[0] * (n + 1) for _ in range(m + 1)]

    for i in range(1, m + 1):
        for j in range(1, n + 1):
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + (a[i][j] >= min_value)

    return s


def check(m, n, k, a, min_value):
    sum = create_table(m, n, a, min_value)

    for x1 in range(1, m - k + 2):
        for y1 in range(1, n - k + 2):
            x2, y2 = x1 + k - 1, y1 + k - 1

            if get_sum(x1, y1, x2, y2, sum) == k * k:
                return True

    return False


def solution(m, n, k, a):
    l, r, res = 1, 10 ** 6, 0
    while l <= r:
        mid = (l + r) // 2

        if check(m, n, k, a, mid):
            res = mid
            l = mid + 1
        else:
            r = mid - 1

    print(res)


if __name__ == '__main__':
    #sys.stdin = open('main.inp', 'r')
    #sys.stdout = open('main.out', "w")

    m, n, k = map(int, input().split())

    a = [[0] * (n + 1) for _ in range(m + 1)]
    for i in range(1, m + 1):
        row = [0] + [int(x) for x in input().split()]
        a[i] = row

    solution(m, n, k, a)