#include<iostream>

using namespace std;

int a[1001][1001];

int max_hourglass(int n, int a[][1001])
{
    int max_sum = INT_MIN;
    for (int i = 1; i <= n - 2; ++i)
        for (int j = 1; j <= n - 2; ++j)
        {
            int cur_sum = 0;
            cur_sum += a[i][j] + a[i][j + 1] + a[i][j + 2];
            cur_sum += a[i + 1][j + 1];
            cur_sum += a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];

            if (max_sum < cur_sum)
                max_sum = cur_sum;
        }

    return max_sum;
}

main()
{
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    cout << max_hourglass(n, a);
}


