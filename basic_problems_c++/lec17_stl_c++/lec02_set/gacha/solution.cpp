#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;

    set < string > s;
    for (int i = 1; i <= n; ++i)
    {
        string t;
        cin >> t,

        s.insert(t);
    }

    cout << s.size();

    return 0; 
}