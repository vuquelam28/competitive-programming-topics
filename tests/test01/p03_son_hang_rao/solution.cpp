#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;
const int N = 2005;

int n, m, k;
long long f[N][N];

int main()
{
    cin >> n >> m >> k; 
    ++k;
    memset(f, 0LL, sizeof f);
    f[1][1] = m;
    for(int i = 2; i <= n; ++i)
    {
        for(int j = 1; j <= min(i, k); ++j)
        {
            (f[i][j] += f[i - 1][j]) %= MOD;
            if(j > 1) (f[i][j] += f[i - 1][j - 1] * (m - 1)) %= MOD;
        }
    }
    cout << f[n][k];
    return 0;
}