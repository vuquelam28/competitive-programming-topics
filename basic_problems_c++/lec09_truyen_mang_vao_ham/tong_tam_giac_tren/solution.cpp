#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int upper_triangle(int n, int a[101][101])
{
    int res = 0;
    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
            res += a[i][j];

    return res;
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> a[i][j];

        cout << upper_triangle(n, a) << endl;
    }

    return 0;
}