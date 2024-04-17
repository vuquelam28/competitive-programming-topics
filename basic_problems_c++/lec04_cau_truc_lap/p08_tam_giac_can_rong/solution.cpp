#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h;
    cin >> h;
    
    for (int i = 1; i <= h; ++i)
    {
        if (i == 1 || i == h)
        {
            for (int j = 1; j <= h - i; ++j)
                cout << ' ';
            for (int j = 1; j <= i * 2 - 1; ++j)
                cout << '*';
        }
        else 
        {
            for (int j = 1; j <= h - i; ++j)
                cout << ' ';
            cout << '*';
            for (int j = 1; j <= i * 2 - 3; ++j)
                cout << ' ';
            cout << '*';
        }
        
        cout << endl;
    }

    return 0;
}