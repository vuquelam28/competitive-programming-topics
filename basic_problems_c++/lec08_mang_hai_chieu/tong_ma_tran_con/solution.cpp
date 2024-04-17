#include <bits/stdc++.h>

using namespace std;

int a[101][101];

int sub_matrix_sum(int x1, int y1, int x2, int y2)
{
    int cur_sum = 0;
    for (int i = x1; i <= x2; ++i)
        for (int j = y1; j <= y2; ++j)
            cur_sum += a[i][j];

    return cur_sum;
}

int main() 
{
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    int res = INT_MIN;
    for (int x1 = 1; x1 <= n - k + 1; ++x1)
        for (int y1 = 1; y1 <= n - k + 1; ++y1)
        {
            int x2 = x1 + k - 1, y2 = y1 + k - 1;
        
            res = max(res, sub_matrix_sum(x1, y1, x2, y2));
        }

    cout << res;

    return 0;
}