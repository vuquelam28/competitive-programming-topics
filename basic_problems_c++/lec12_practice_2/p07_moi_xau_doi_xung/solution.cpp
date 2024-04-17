#include <bits/stdc++.h>

using namespace std;

bool is_palin(string &st)
{
    int n = st.size();
    for (int i = 0; i < n / 2; ++i)
        if (st[i] != st[n - i - 1])
            return false;

    return true;
}

main()
{
    string s;
    cin >> s;

    int res = 0;
    for (int l = 1; l <= s.size(); ++l)
        for (int i = 0; i <= s.size() - l; ++i)
        {
            string st = s.substr(i, l);
            if (is_palin(st) == true)
                ++res;
        }
        
    cout << res;

    return 0;
}