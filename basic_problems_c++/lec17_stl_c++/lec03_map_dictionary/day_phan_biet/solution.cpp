#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    map < int, int > a;
    for (int i = 1; i <= n; ++i)
    {
        int s;
        cin >> s;
        
        a[s]++;
    }
    
    int d = 0;
    for (auto e: a)
        if (e.second != 1)
        {
            d = 1;
            break;
        }
    
    if (d == 0)
        cout << "YES";
    else
        cout << "NO";    
        
    return 0;
}