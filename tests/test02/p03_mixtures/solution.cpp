#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 101;
int N, a[maxn], sum[maxn], dp[maxn][maxn];

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
        dp[i][i] = 0;
    }
}

void solution()
{
    for (int k = 2; k <= N; ++k)
        for (int i = 1; i <= N - k + 1; ++i)
        {
            int j = i + k - 1;

            dp[i][j] = LLONG_MAX;
            for (int p = i; p <= j; ++p)
            {
                int smoke = ((sum[p] - sum[i - 1]) % 100) * ((sum[j] - sum[p]) % 100);
                dp[i][j] = min(dp[i][j], dp[i][p] + dp[p + 1][j] + smoke);
            }
        }

    cout << dp[1][N] << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        enter();
        solution();
    }

    return 0;
}