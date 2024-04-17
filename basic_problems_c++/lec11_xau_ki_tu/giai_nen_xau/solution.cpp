#include <bits/stdc++.h>

using namespace std;

main()
{
    string s;
    cin >> s;
        
    s = s + ' ';
    
    int i = 0, times = 0;
    while (i < s.size())
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            times = 0;
            while (i < s.size() && '0' <= s[i] && s[i] <= '9')
            {
                times = times * 10 + (s[i] - '0');
                ++i;
            }
        }
        else
        {
            for (int j = 1; j <= times; ++j)
                cout << s[i];
            
            ++i;
        }
    }

    return 0;
}