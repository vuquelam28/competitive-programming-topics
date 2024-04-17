#include <bits/stdc++.h>
#define task "mini_square."

using namespace std;

void enter(int &m, int &n, int &k, vector < vector < int > > &a)
{
    cin >> m >> n >> k;

    a = vector < vector < int > >(m + 1, vector < int >(n + 1));
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
}

int get_sum(int x1, int y1, int x2, int y2, vector < vector < int > > &sum)
{
    return sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
}

// Tạo mảng s[i][j] là số lượng giá trị a[i][j] >= min_value
// trong hình chữ nhật (1, 1, i, j).
vector < vector < int > > create_table(int m, int n, vector < vector < int > > &a,
                                       int min_value)
{
    // Tạo mảng tổng tiền tố s[i][j].
    vector < vector < int > > s(m + 1, vector < int >(n + 1, 0));
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + (a[i][j] >= min_value);

    return s;
}

// Kiểm tra xem có tồn tại hình vuông k * k nào mà các số trong đó đều
// lớn hơn hoặc bằng min_value hay không.
bool check(int m, int n, int k, vector < vector < int > > &a, int min_value)
{
    vector < vector < int > > sum = create_table(m, n, a, min_value);

    for (int i = 1; i <= m - k + 1; ++i)
        for (int j = 1; j <= n - k + 1; ++j)
        {
            int ii = i + k - 1, jj = j + k - 1;

            if (get_sum(i, j, ii, jj, sum) == k * k)
                return true;
        }

    return false;
}

void solution(int m, int n, int k, vector < vector < int > > &a)
{
    // Chặt nhị phân tìm giá trị nhỏ nhất là lớn nhất trong các hình
    // vuông kích thước k * k.
    int l = 1, r = 1000000, res = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (check(m, n, k, a, mid))
            res = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, k;
    vector < vector < int > > a;

    enter(m, n, k, a);
    solution(m, n, k, a);

    return 0;
}
