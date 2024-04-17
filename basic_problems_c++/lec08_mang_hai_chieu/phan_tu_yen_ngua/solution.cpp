#include <bits/stdc++.h>

using namespace std;

int a[1001][1001], min_col[1001], max_row[1001];

main()
{
    int M, N;
    cin >> M >> N;

    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= M; ++i)
    {
        int max_value = a[i][1];
        for (int j = 2; j <= N; ++j)
            max_value = max(max_value, a[i][j]);

        max_row[i] = max_value;
    }
    for (int j = 1; j <= N; ++j)
    {
        int min_value = a[1][j];
        for (int i = 2; i <= M; ++i)
            min_value = min(min_value, a[i][j]);

        min_col[j] = min_value;
    }

    int res = 0;
    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j)
            if (a[i][j] == max_row[i] && a[i][j] == min_col[j])
                ++res;

    cout << res;

    return 0;
}