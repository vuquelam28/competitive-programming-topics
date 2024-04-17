#include <bits/stdc++.h>
#define task "digits_sum_sorting."

using namespace std;

int digits_sum(long long n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }

    return ans;
}

bool cmp(long long a, long long b)
{
    return (digits_sum(a) < digits_sum(b) || (digits_sum(a) == digits_sum(b) && a > b));
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < long long > a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end(), cmp);

    for (long long e: a)
        cout << e << ' ';

    return 0;
}