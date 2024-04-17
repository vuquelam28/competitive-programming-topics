#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        string st;

        for (int j = 1; j <= n - i; ++j)
            st = st + ' ';
        for (int j = 1; j <= i; ++j)
            st = st + '#';

        cout << st;
        if (i < n)
            cout << endl;
    }

    return 0;
}