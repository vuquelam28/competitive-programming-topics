#include <bits/stdc++.h>
#define int long long
#define task "gold_digger."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

const int maxn = 201;
typedef int arr2[maxn][maxn];

// Nhập dữ liệu.
void enter(int &m, int &n, arr2 a,
           vector < bool > &save_row, vector < bool > &save_col)
{
    cin >> m >> n;

    save_row.resize(m + 1, true);
    save_col.resize(n + 1, true);

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];

	    // Nếu a[i][j] = 1 thì hàng i, cột j sẽ không thể khai thác được.
            if (a[i][j])
            {
                save_row[i] = false;
                save_col[j] = false;
            }
        }
}

// Đếm số ô có thể khai thác.
void solution(int test_number, int m, int n, arr2 a,
              vector < bool > save_row, vector < bool > save_col)
{
    int total_gold = 0;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            if (!a[i][j])
                total_gold += (save_row[i] && save_col[j]);


    cout << "#" << test_number << ' ' << total_gold << endl;
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    for (int i = 1; i <= ntest; ++i)
    {
        int m, n;
        arr2 a;
        vector < bool > save_row, save_col;

        enter(m, n, a, save_row, save_col);
        solution(i, m, n, a, save_row, save_col);
    }

    return 0;
}