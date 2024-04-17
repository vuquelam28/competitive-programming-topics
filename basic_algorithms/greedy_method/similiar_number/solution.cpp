#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }

    m /= n;

    int res = 0;
    while (true)
    {
        if (m % 2 == 0)
            m /= 2, ++res;
        else if (m % 3 == 0)
            m /= 3, ++res;
        else 
            break;
    }

    if (m > 1)
    {
        cout << -1;
        return 0;
    }

    cout << res;
}