#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector < string > a(n + 1);
    map < string, int > cnt;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        
        ++cnt[a[i]];
    }
    
    int res = 0;
    for (int i = 1; i <= n; ++i)
        if (cnt[a[i]] % 2) 
        { 
            res = i; 
            break; 
        }

    cout << a[res];

    return 0;
}