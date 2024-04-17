#include <bits/stdc++.h>
#define int unsigned long long

using namespace std;

void enter(int &n, int &k)
{
    cin >> n >> k;
}

void solution(int n, int k)
{
    vector < int > ways(n + 1);
    ways[1] = 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 2; j <= min(k, i); ++j)
            if (i % j == 0)
                ways[i] += ways[i / j];

    vector < int > dp(n + 1);
    dp[0] = 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 2; j <= i; ++j)
            dp[i] += dp[i - j] * ways[j];

    cout << dp[n];
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;

    enter(n, k);
    solution(n, k);

    return 0;
}