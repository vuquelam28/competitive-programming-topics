#include <bits/stdc++.h>
#define task "swap_symmetric."

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector < vector < int > > a(n + 1, vector < int >(n + 1));
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j < i; ++j)
            swap(a[i][j], a[j][i]);

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }

    return 0;
}