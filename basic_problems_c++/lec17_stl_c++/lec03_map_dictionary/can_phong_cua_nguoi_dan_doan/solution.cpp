#include <bits/stdc++.h>

using namespace std;

main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, x;
    cin >> k;

    map <int, int> m;
    while (cin >> x) 
        m[x]++;
    
    for (auto it : m) 
        if (it.second == 1)
        {
            cout << it.first;
            break;
        }

    return 0;
}