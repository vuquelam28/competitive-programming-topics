#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

void solution(int n)
{
    int ans = 1;
    if (n % 2 == 0)
    {
        ans = (n / 2) * (n / 2) % MOD;
        ans = ans * (n + 1) % MOD * (n + 1) % MOD;
    }
    else
    {
        ans = n * n % MOD;
        ans = ans * ((n + 1) / 2) % MOD * ((n + 1) / 2) % MOD;
    }

    cout << ans << endl;
}

signed main()
{
    int n;
    cin >> n;

    solution(n);

    return 0;
}