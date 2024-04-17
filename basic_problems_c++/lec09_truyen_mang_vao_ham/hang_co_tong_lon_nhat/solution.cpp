#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int max_index_sum(int m, int n, int a[101][101])
{
    int id = 1, max_sum = 0;
    for (int j = 1; j <= n; ++j)
        max_sum += a[1][j];

    for (int i = 2; i <= m; ++i)
    {
        int cur_sum = 0;
        for (int j = 1; j <= n; ++j)
            cur_sum += a[i][j];

        if (cur_sum > max_sum)
        {
            id = i;
            max_sum = cur_sum;
        }
    }

    return id;
}

int main() 
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        for (int i = 1; i <= m; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> a[i][j];

        cout << max_index_sum(m, n, a) << endl;
    }
    
    return 0;
}