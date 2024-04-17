#include <bits/stdc++.h>

using namespace std;

int a[101][101], b[101][101];

int main() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];


    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            b[i][j] = a[n - j + 1][i];
            cout << b[i][j] << ' ';
        }

        cout << endl;
    }

    return 0;
}