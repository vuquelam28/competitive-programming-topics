#include <bits/stdc++.h>
#define task "SX10."
#define inf 1e9 + 7

using namespace std;
long long n, k;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
}

void solve()
{
    long long res = 0, m = n, nho = 0, d = 0, cntDigit = 0;

    while (m > 0)
    {
        cntDigit += m % 10;
        ++d; // Scs cua N
        long long tmp = cntDigit + nho;
        nho = tmp / 10;
        res = res + tmp % 10;
        m /= 10;
    }

    long long tmp = cntDigit + nho;
    nho = tmp / 10;
    if (k + 1 > d)
        res = (tmp < 10) ? res + tmp * (k + 1 - d) : res + (tmp % 10) * (k + 1 - d);

    while (n > 10)
    {
        cntDigit -= n % 10;
        long long tmp = cntDigit + nho;
        nho = tmp / 10;
        res = res + tmp % 10;
        n /= 10;
    }

    cout << res + nho;
}

int main()
{
    enter();
    solve();
    return 0;
}
