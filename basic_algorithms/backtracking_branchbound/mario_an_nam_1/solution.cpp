#include <bits/stdc++.h>

using namespace std;

int ans = INT_MIN;
int a[11][11];
int n, m;

void back_tracking(int i, int j, int sum)
{
    if(i == n && j == m)
    {
        ans = max(ans, sum);
        return;
    }

    if (i < n) 
        back_tracking(i + 1, j, sum + a[i + 1][j]);
    if (j < m) 
        back_tracking(i, j + 1, sum + a[i][j + 1]);
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j) 
            cin >> a[i][j];

    back_tracking(1, 1, a[1][1]);

    cout << ans;

    return 0;
}
