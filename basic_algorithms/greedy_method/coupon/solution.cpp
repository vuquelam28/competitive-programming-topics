#include <bits/stdc++.h>

using namespace std;
typedef pair < int, int > II;
const int maxn = 31;
int n, m, save_money[maxn], coupon_amount[maxn];
vector < int > sale[maxn];

void enter()
{
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        int k;
        cin >> k;

        // Tạo vector sale[i]: Danh sách coupon cần dùng cho chương trình thứ i.
        sale[i].resize(k); 
        for (int j = 0; j < k; ++j)
            cin >> sale[i][j];

        // save_money[i]: Số tiền tiết kiệm được nếu sử dụng chương trình thứ i.    
        cin >> save_money[i];
    }

    // Số lượng coupon mỗi loại hiện đang có.
    for (int i = 1; i <= m; ++i)
        cin >> coupon_amount[i];
}

void solve()
{
    int total_save_money = 0;

    for (int i = 1; i <= n; ++i)
    {
        // Xác định trong các loại coupon của ct thứ i, loại nào Dũng có ít nhất => chính bằng số lần tham gia ctr này.
        int min_amount = coupon_amount[sale[i][0]];
        for (int j = 1; j < sale[i].size(); ++j)
            min_amount = min(min_amount, coupon_amount[sale[i][j]]);

        total_save_money += min_amount * save_money[i];
    }

    cout << total_save_money << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        enter();
        solve();
    }
    
    return 0;
}
