#include <bits/stdc++.h>

using namespace std;

main()
{
    string s;
    cin >> s;

    int i = 0;
    long long res = 0;
    while (i < s.size())
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            long long num = 0;
            while ('0' <= s[i] && s[i] <= '9')
            {
                num = num * 10 + (s[i] - '0');
                ++i;
            }

            res = max(res, num);
        }
        else 
            ++i;
    }

    cout << res;

    return 0;
}