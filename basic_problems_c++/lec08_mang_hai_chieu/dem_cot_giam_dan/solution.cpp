#include <bits/stdc++.h>

using namespace std;

const int maxn = 101;
int a[maxn][maxn];

bool check_col(int j, int m)
{
    for (int i = 2; i <= m; ++i)
        if (a[i][j] > a[i - 1][j])
            return false;

    return true;
}

int main() 
{
    int m, n;
    cin >> m >> n;

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    int res = 0;
    for (int j = 1; j <= n; ++j)
        if (check_col(j, m))
            ++res;

    cout << res;

    return 0;
}