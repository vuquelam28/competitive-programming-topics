#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6;
vector < bool > is_prime;
vector < int > prime_nums;

void eratosthenes_sieve(int maxn, vector < bool >& is_prime, vector < int >& prime_nums)
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= maxn; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= maxn; j += i)
                is_prime[j] = false;

    for (int i = 2; i <= maxn; ++i)
        if (is_prime[i])
            prime_nums.push_back(i);
}

void data_preparation()
{
    is_prime.resize(maxn + 1, true);
    eratosthenes_sieve(maxn, is_prime, prime_nums);
}

void solution(int n)
{
    int id = -1;
    int l = 2, r = prime_nums.size();
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (prime_nums[mid] * prime_nums[mid - 1] * prime_nums[mid - 2] <= n)
            id = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    if (id == -1)
        cout << -1 << '\n';
    else
        cout << prime_nums[id] * prime_nums[id - 1] * prime_nums[id - 2] << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    data_preparation();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        solution(n);
    }

    return 0;
}