#include <bits/stdc++.h>

using namespace std;

int a[101][101];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    int tmp = a[1][1];
    for (int i = 2; i <= n; ++i)
    {
        if (a[i][i] <= tmp)
        {
            cout << "NO";
            return 0;
        }

        tmp = a[i][i];
    }

    cout << "YES";

    return 0;
}