#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6;
int a, b;
bool is_prime[maxn + 10];
vector < int > prime;

void enter()
{
    cin >> a >> b;
}

void eratosthene(int limit)
{
    fill(is_prime, is_prime + 1 + limit, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= limit; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= limit; j += i)
                is_prime[j] = false;

    for (int i = 2; i <= limit; ++i)
        if (is_prime[i] && i != 3)
            prime.push_back(i);
}

int count_dmt_numbers(int N)
{
    int res = ((int)pow(3, 8) <= N);

    int l = 0, r = prime.size() - 1, pos = -1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if ((3 * prime[mid]) * (3 * prime[mid]) <= N)
        {
            pos = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    if (pos != -1)
        res += (pos + 1);

    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    eratosthene(1000000);

    int ntest;
    cin >> ntest;

    // Với mỗi testcase, số lượng DMT thuộc [a, b] = số lượng DMT thuộc [1, b] - số lượng DMT thuộc [1, a - 1].
    while (ntest--)
    {
        enter();
        cout << count_dmt_numbers(b) - count_dmt_numbers(a - 1) << endl;
    }

    return 0;
}