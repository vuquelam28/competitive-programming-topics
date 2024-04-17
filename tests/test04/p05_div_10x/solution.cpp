#include <bits/stdc++.h>
#define task "DIV10X."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1e5 + 10;
long long n, x, a[maxn], cnt2[maxn], cnt5[maxn], dp[maxn][19][19];

void enter()
{
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

long long findLog(long long &n, long long a) // Tim so x lon nhat sao cho a^x <= n -> so ts 2 va 5 cua a[i]
{
    int power = 0;
    while (n % a == 0)
    {
        power++;
        n /= a;
    }
    return power;
}

void solution()
{
    for (int i = 1; i <= n; ++i)
    {
        // cnt2[i]: so luong thua so 2 trong so a[i].
        cnt2[i] = findLog(a[i], 2); 
        // cnt5[i]: so luong thua so 5 trong so a[i].
        cnt5[i] = findLog(a[i], 5); 
    }
    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= x; ++j)
            for (int k = 0; k <= x; ++k)
                dp[i][j][k] = n + 1;
    for (int i = 0; i <= n; ++i)
        dp[i][0][0] = 1;

    for (int i = 2; i <= n; ++i)
        for (int j = 0; j <= x; ++j)
            for (int k = 0; k <= x; ++k)
            {
               dp[i][j][k] = dp[i - 1][j][k];
               if (cnt2[i] >= j && cnt5[i] >= k)
                    dp[i][j][k] = 1;
               else
                    if (cnt2[i] < j && cnt5[i] >= k)
                        dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - cnt2[i]][0] + 1);
                    else
                        if (cnt2[i] >= j && cnt5[i] < k)
                            dp[i][j][k] = min(dp[i][j][k], dp[i - 1][0][k - cnt5[i]] + 1);
                        else
                            dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - cnt2[i]][k - cnt5[i]] + 1);
            }

    if (dp[n][x][x] != n + 1)
        cout << dp[n][x][x];
    else 
        cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}