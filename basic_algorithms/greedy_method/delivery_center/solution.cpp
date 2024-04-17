#include <bits/stdc++.h>
#define int long long
#define task "delivery_center."

using namespace std;

// Nhập dữ liệu.
void enter(int &n, int &m, int &q, vector < pair < int, int > > &packages,
           vector < int > &weight_limits)
{
    cin >> n >> m >> q;

    packages.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> packages[i].first >> packages[i].second;

    weight_limits.resize(m + 1);
    for (int i = 1; i <= m; ++i)
        cin >> weight_limits[i];
}

// Xử lý một truy vấn.
void query(int m, int l, int r, vector < pair < int, int > > &packages,
           vector < int > &weight_limits)
{
    vector < bool > used(m + 1, false);
    vector < int > available_boxes;

    // Lọc ra các hộp không thuộc đoạn [l, r] để sử dụng.
    for (int i = 1; i <= m; ++i)
        if (i < l || i > r)
            available_boxes.push_back(weight_limits[i]);
    sort(available_boxes.begin(), available_boxes.end());

    // Tham lam chọn hộp nhỏ nhất chứa vừa món hàng thứ i.
    int res = 0;
    for (int i = 1; i < packages.size(); ++i)
        for (int j = 0; j < available_boxes.size(); ++j)
            if (!used[j] && available_boxes[j] >= packages[i].first)
            {
                used[j] = 1;
                res += packages[i].second;

                break;
            }

    cout << res << endl;
}

// Hàm so sánh để sắp xếp các đồ vật giảm dần theo giá trị.
bool cmp(pair < int, int > a, pair < int, int > b)
{
    return a.second > b.second;
}

// Xử lý bài toán.
void solution(int q, int m, vector < pair < int, int > > &packages,
              vector < int > &weight_limits)
{
    // Trước tiên sắp xếp các đồ vật giảm theo giá trị.
    sort(packages.begin() + 1, packages.end(), cmp);

    for (int i = 1; i <= q; ++i)
    {
        int l, r;
        cin >> l >> r;

        query(m, l, r, packages, weight_limits);
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    vector < pair < int, int > > packages;
    vector < int > weight_limits;

    enter(n, m, q, packages, weight_limits);
    solution(q, m, packages, weight_limits);

    return 0;
}