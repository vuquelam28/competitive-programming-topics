#include <iostream>

using namespace std;

int a[101][101];

main()
{
    int m, n, x;
    cin >> m >> n >> x;

    int res = 0;    
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];

            res += (a[i][j] == x);
        }

    cout << res;

    return 0;
}
