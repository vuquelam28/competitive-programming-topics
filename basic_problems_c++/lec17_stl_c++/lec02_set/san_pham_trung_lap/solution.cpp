#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector < string > a(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin.ignore();
            cin >> a[i];
        }

        set < string > s;
        for (int i = 1; i <= n; ++i)
            if (s.find(a[i]) != s.end())
            {
                cout << a[i] << endl;
                break;
            }
            else 
                s.insert(a[i]);
    }
    
    return 0;
}