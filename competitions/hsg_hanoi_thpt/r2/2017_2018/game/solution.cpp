#include <bits/stdc++.h>
#define task "game."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1e7 + 10;
int N, dp[maxn];

void enter()
{
    cin >> N;
}

void solution()
{
    // Let dp[i] be minimum number that Binh has when An's number is i. Firstly, we have dp[0] = dp[1] = 0; dp[2] = 1
    // (as 2 = 2 * 1) and dp[3] = 3. Others dp[i] is set to +oo.
    fill(dp, dp + N + 1, inf);
    dp[0] = dp[1] = 0;
    dp[2] = 1;
    dp[3] = 3;

    // Here we try to extract number i = a * b, with a is a divisor of i and b = i / a. Use bottom-up dp.
    for (int a = 1; a <= N; ++a)
        for (int mul = a; mul + a <= N; mul += a)
            if (dp[mul] != inf)
            {
                int b = mul / a;

                if (mul + a <= N)
                    dp[mul + a] = min(dp[mul + a], dp[mul] + b);
                if (mul + b <= N)
                    dp[mul + b] = min(dp[mul + b], dp[mul] + a);
            }

    // Last result is dp[N].
    cout << dp[N];
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


