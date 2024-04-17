
def solve(n, a):
    count = 0
    cur = a[-1]
    for i, num in enumerate(a[::-1]):
        if num > cur:
            count += 1
            cur = num
    return count
if __name__ == '__main__':
    ans = []
    ans.append(solve(int(input()), list(map(int, input().split()))))
    print(*ans, sep='\n')