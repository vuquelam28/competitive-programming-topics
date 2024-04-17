#include <bits/stdc++.h>
#define int long long
#define task "Robot."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

string s;
int n, dp[101][51][2];

void enter()
{
    cin >> s >> n;
    s = ' ' + s;
}

void solution()
{
    // Let dp[i][j][d] is: Farthest distance that the robot can go if it takes first i commands,
    // make j change and the current direction is left or right (d = 0 or 1).
    for (int i = 0; i < s.size(); ++i)
        for (int j = 0; j <= n; ++j)
            dp[i][j][0] = dp[i][j][1] = -inf;
    dp[0][0][0] = 0;
    dp[0][0][1] = 0;

    for (int i = 1; i < s.size(); ++i)
        for (int j = 0; j <= n; ++j)
            for (int k = 0; k <= j; ++k)
            {
                if (s[i] == 'F') // If this is a moving forward command.
                {
                    if (k % 2 == 1) // Change the i-th command with an odd times of changes -> it will be changed.
                    {
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - k][1]);
                        dp[i][j][1] = max(dp[i][j][1], dp[i - 1][j - k][0]);
                    }
                    else // Change the i-th command with an even times of changes -> it will be remained.
                    {
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - k][0] - 1);
                        dp[i][j][1] = max(dp[i][j][1], dp[i - 1][j - k][1] + 1);
                    }
                }
                else
                {
                    if (k % 2 == 1) // Change the i-th command with an odd times of changes -> it will be changed.
                    {
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - k][0] - 1);
                        dp[i][j][1] = max(dp[i][j][1], dp[i - 1][j - k][1] + 1);
                    }
                    else // Change the i-th command with an even times of changes -> it will be remained.
                    {
                        dp[i][j][0] = max(dp[i][j][0], dp[i - 1][j - k][1]);
                        dp[i][j][1] = max(dp[i][j][1], dp[i - 1][j - k][0]);
                    }
                }
            }

    cout << max(dp[s.size() - 1][n][0], dp[s.size() - 1][n][1]);
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}