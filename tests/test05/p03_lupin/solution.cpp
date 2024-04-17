#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 101, maxm = 1001;
int N, M, dp[maxn][maxm], max_row[maxn][maxn];
vector < int > total_value[maxn];

void enter()
{
    cin >> N >> M;

    for (int i = 1; i <= N; ++i)
    {
        // K is the number of pots on row i-th.
        int K;
        cin >> K;

        total_value[i].resize(K + 1);

        for (int j = 1; j <= K; ++j)
        {
            int x;
            cin >> x;

            // total_value[i][j]: Total value of pots on the i-th row from position 1 to position j.
            total_value[i][j] = total_value[i][j - 1] + x;
        }
    }
}

void data_preparation()
{
    for (int i = 1; i <= N; ++i)
    {
        int cnt = total_value[i].size() - 1; // The i-th row has cnt pots (1 <= cnt <= 100).

        // Let max_row[i][j] be the maximum value can be broken on the i-th row when Lupin broke j pots on this row.
        for (int j = 1; j <= cnt; ++j)
            for (int k = 0; k <= j; ++k)
            {
                int value_left = total_value[i][k]; // Broke k left-pot.
                int value_right = total_value[i][cnt] - total_value[i][cnt - (j - k)]; // Broke (j - k) right-pot.
                max_row[i][j] = max(max_row[i][j], value_left + value_right);
            }
    }
}

void solution()
{
    // Here let dp[i][j]: Maximum value of pots can be broken when broke j pots from 1-st row to i-th row.
    for (int i = 1; i <= N; ++i)
        for (int j = 1; j <= M; ++j)
        {
            // Maximum amount of pots can be broken on the i-th row.
            int max_size = min(j, (int) total_value[i].size() - 1);

            for (int k = 0; k <= max_size; ++k)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + max_row[i][k]);
        }

    cout << dp[N][M];
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    data_preparation();
    solution();

    return 0;
}