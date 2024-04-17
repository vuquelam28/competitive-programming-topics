#include <iostream>

using namespace std;

const int maxn = 1001;

int a[maxn][maxn];

main()
{
    int m, n;
    cin >> m >> n;

    int res = 0;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];

            res += (a[i][j] < 0);
        }

    cout << res;
}