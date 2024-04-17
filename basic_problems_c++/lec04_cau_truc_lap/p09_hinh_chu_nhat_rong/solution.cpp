#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n; 
    cin >> m >> n;
    
    for (int i = 1; i <= m; ++i)
    {
        if (i == 1 || i == m)
        {
            for (int j = 1; j <= n; ++j)
                cout << '*';
        }
        else 
        {
            cout << '*';
            for (int j = 1; j <= n - 2; ++j)
                cout << ' ';
            
            if (n >= 2)
                cout << '*';
        }
        
        cout << endl;
    }

    return 0;
}