#include <bits/stdc++.h>

using namespace std;

main()
{
    int m, n, x, y;
    cin >> m >> n >> x >> y;

    vector < vector < int > > a(m + 1, vector < int >(n + 1));
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for (int j = 1; j <= n; ++j)
        swap(a[x][j], a[y][j]);

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }

    return 0;
}