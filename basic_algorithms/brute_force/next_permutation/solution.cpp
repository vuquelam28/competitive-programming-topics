#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;

    vector < int > a(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int p1 = 0;
    for (int i = n - 1; i >= 1; --i)
        if (a[i] < a[i + 1])
        {
            p1 = i;
            break;
        }

    if (p1 == 0)
    {
        cout << -1;
        return 0;
    }

    int p2 = 0;
    for (int i = n; i > p1; --i)
        if (a[i] > a[p1])
        {
            p2 = i;
            break;
        }

    swap(a[p1], a[p2]);
    reverse(a.begin() + p1 + 1, a.end());

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}