#include <bits/stdc++.h>

using namespace std;

int sum_divisor(int n)
{
    if (n == 1)
        return 0;

    int sum = 0;
    for (int i = 1; i < n; ++i)
        if (n % i == 0)
            sum += i;

    return sum;
}

void solution(int n)
{
    int res = 0;

    for (int i = 1; i <= n; ++i)
    {
        int friendly_num = sum_divisor(i);

        if (sum_divisor(friendly_num) == i && friendly_num <= i)
            ++res;
    }

    cout << res;
}

main()
{
    int n;
    cin >> n;

    solution(n);

    return 0;
}