// Solution 1: 2D Array.
// Lam Cherry CPP.

#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

const int maxn = 400;
int a[maxn + 1][maxn + 1], main_diagonal[maxn + 1][maxn + 1], secondary_diagonal[maxn + 1][maxn + 1];

/**
 Tính trước hai mảng:
  1. main_diagonal[i][j]: Tổng đường chéo chính kết thúc tại ô (i, j) đi ngược lên trên của ma trận.
  2. secondary_diagonal[i][j]: Tổng đường chéo phụ kết thúc tại ô (i, j), đi ngược lên trên của ma trận.
*/
void pre_computation(int n)
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            main_diagonal[i][j] = main_diagonal[i - 1][j - 1] + a[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = n; j >= 1; --j)
            secondary_diagonal[i][j] = secondary_diagonal[i - 1][j + 1] + a[i][j];
}

// Xét mọi ô (i, j) rồi xét hình vuông kích thước k với ô trái trên là (i, j).
// Tìm ra chênh lệch giữa tổng đường chéo chính và phụ dựa vào hai mảng đã tính sẵn.
void solution(int n)
{
    int res = INT_MIN;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int max_size = min(n - i + 1, n - j + 1);
            for (int k = 1; k <= max_size; ++k)
            {
                int i1 = i, j1 = j + k - 1; // Ô phải trên.
                int i2 = i + k - 1, j2 = j + k - 1; // Ô phải dưới.
                int i3 = i + k - 1, j3 = j; // Ô trái dưới.

                int a = main_diagonal[i2][j2] - main_diagonal[i - 1][j - 1];
                int b = secondary_diagonal[i3][j3] - secondary_diagonal[i1 - 1][j1 + 1];
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

