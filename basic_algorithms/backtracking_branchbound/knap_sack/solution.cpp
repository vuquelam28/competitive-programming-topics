#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 21;
int n, x[maxn];
double W, res;
pair < double, double > gold[maxn];

void enter()
{
    cin >> n >> W;

    for (int i = 1; i <= n; ++i)
        cin >> gold[i].first >> gold[i].second;
}

// Thử kiểm tra xem cách chọn này có phải một cách chọn hợp lệ hay không.
// Nếu tổng khối lượng chọn <= W thì lấy max của tổng giá trị.
void check_solution()
{
    double total_weight = 0, total_value = 0;
    for (int i = 1; i <= n; ++i)
        if (x[i])
        {
            total_weight += gold[i].first;
            total_value += gold[i].second;
        }

    if (total_weight <= W)
        res = max(res, total_value);
}

void backtrack(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        x[i] = j;

        if (i == n)
            check_solution();
        else
            backtrack(i + 1);
    }
}

void solution()
{
    backtrack(1);

    cout << fixed << setprecision(4) << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}