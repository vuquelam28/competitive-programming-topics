#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int main() 
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    int res = 0;
    for (int i = 2; i <= n; ++i)
        for (int j = 1; j < i; ++j)
            res += a[i][j];

    cout << res;

    return 0;
}