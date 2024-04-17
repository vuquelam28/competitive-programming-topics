if __name__ == '__main__':
    n = int(input())
    k = int(input())
    a = int(input())
    b = int(input())

    if k == 1:
        print((n - 1) * a)
    else:
        minimum_cost = 0
        while n != 1:
            if n < k:
                minimum_cost += (n - 1) * a
                break
            elif n == k:
                minimum_cost += min(b, (n - 1) * a)
                break
            else:
                if n % k != 0:
                    minimum_cost += (n % k) * a
                    n -= (n % k)
                else:
                    minimum_cost += min(b, (n - n // k) * a)
                    n //= k

        print(minimum_cost)




