#include <bits/stdc++.h>

using namespace std;

string check(string s) 
{
    for (int i = 1; i < (int)s.size(); ++i)
        if (s[i] == s[i - 1])
            return "YES";
    
    return "NO";
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        string s;
        cin >> s;

        cout << check(s) << endl;
    }

    return 0;
}