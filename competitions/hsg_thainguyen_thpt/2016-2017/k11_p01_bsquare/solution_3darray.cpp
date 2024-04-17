// Solution 2: 3D Array.
// Lam Cherry CPP.

#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

const int maxn = 400;
int a[maxn + 1][maxn + 1];
int main_diagonal[maxn + 1][maxn + 1][maxn + 1], secondary_diagonal[maxn + 1][maxn + 1][maxn + 1];

/**
 Tính trước hai mảng:
  1. main_diagonal[i][j][k]: Tổng đường chéo chính của hình vuông cạnh k, ô trái trên là (i, j).
  2. secondary_diagonal[i][j][k]: Tổng đường chéo phụ của hình vuông cạnh k, ô phải trên là (i, j).
*/
void pre_computation(int n)
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int max_size = min(n - i + 1, n - j + 1);
            for (int k = 1; k <= max_size; ++k)
                main_diagonal[i][j][k] = main_diagonal[i][j][k - 1] + a[i + k - 1][j + k - 1];
        }

    for (int i = 1; i <= n; ++i)
        for (int j = n; j >= 1; --j)
        {
            int max_size = min(n - i + 1, j);
            for (int k = 1; k <= max_size; ++k)
                secondary_diagonal[i][j][k] = secondary_diagonal[i][j][k - 1] + a[i + k - 1][j - k + 1];
        }
}

void solution(int n)
{
    int res = INT_MIN;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int max_size = min(n - i + 1, n - j + 1);
            for (int k = 1; k <= max_size; ++k)
            {
                int a = main_diagonal[i][j][k];
                int b = secondary_diagonal[i][j + k - 1][k];
                res = max(res, a - b);
            }
        }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];

    pre_computation(n);
    solution(n);

    return 0;
}