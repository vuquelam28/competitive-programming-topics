#include <bits/stdc++.h>

using namespace std;

main()
{
    string s, x;
    cin >> s >> x;

    for (int i = 0; i < s.size() - x.size() + 1; ++i)
        if (s.substr(i, x.size()) == x)
        {
            cout << i;
            return 0;
        }

    cout << -1;

    return 0;
}