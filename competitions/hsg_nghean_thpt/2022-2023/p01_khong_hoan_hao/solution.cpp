#pragma GCC optimize("O2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e5;

// Sàng số nguyên tố tới 10^5 và xây dựng mảng smallest_divisor[i] là ước nguyên tố nhỏ nhất của i.
void eratosthenes_sieve(int maxn, vector < int > &smallest_divisor)
{
    vector < bool > is_prime(maxn + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= maxn; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= maxn; j += i)
            {
                is_prime[j] = false;

                if (!smallest_divisor[j])
                    smallest_divisor[j] = i;
            }

    for (int i = 1; i <= maxn; ++i)
        if (is_prime[i])
            smallest_divisor[i] = i;
}

// Tính a^b bằng giải thuật bình phương và nhân.
int exponentiation(int a, int b)
{
    if (b == 0)
        return 1LL;

    int half = exponentiation(a, b / 2LL);

    if (b & 1)
        return half * half * a;
    else
        return half * half;
}

// Tính tổng các ước nguyên dương của n không kể chính nó.
int total_divisors(int n, vector < int > &smallest_divisor)
{
    int x = 1, y = 1, m = n;
    while (m != 1)
    {
        int div = smallest_divisor[m];
        int cnt = 0;
        while (m % div == 0)
        {
            ++cnt;
            m /= div;
        }

        if (cnt != 0)
        {
            x *= (exponentiation(div, cnt + 1) - 1);
            y *= (div - 1);
        }
    }

    return x / y - n;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector < int > smallest_divisor(maxn + 1);
    eratosthenes_sieve(maxn, smallest_divisor);

    int a, b;
    cin >> a >> b;

    int res = 0;
    for (int i = a; i <= b; ++i)
        res += (total_divisors(i, smallest_divisor) > i);

    cout << res;

    return 0;
}
