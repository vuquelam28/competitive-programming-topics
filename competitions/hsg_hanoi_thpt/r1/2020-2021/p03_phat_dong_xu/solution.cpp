#include <bits/stdc++.h>
#define int long long

using namespace std;

void print_result(int new_size, vector < int > &update, vector < int > &pos)
{
    // Số lượng đồng xu tối đa mà người nhận được nhiều nhất có được.
    int max_coins = *max_element(update.begin(), update.end());

    // Đếm số lượng người có cùng số lượng đồng xu như vậy.
    // Gặp một vị trí i có update[i] = max_coins thì toàn bộ các vị trí từ
    // pos[i] tới pos[i + 1] - 1 sẽ là đoạn có cùng số lượng đồng xu nhận được
    // là update[i] = max_coins. Ta tính tổng số lượng các vị trí đó.
    int amount_of_people = 0;
    for (int i = 0; i < new_size - 1; ++i)
        if (update[i] == max_coins)
            amount_of_people += (pos[i + 1] - pos[i]);

    cout << max_coins << ' ' << amount_of_people;
}

void solution(int n, int m, vector < pair < int, int > > &q, vector < int > &pos)
{
    // Xử lý rời rạc hóa các đoạn vị trí [u, v] được cho thêm 1 đồng xu.
    // Lưu ý: Đoạn [u, v] được update thì cặp giá trị (u, v + 1) được đẩy vào mảng pos.
    sort(pos.begin(), pos.end());
    int new_size = unique(pos.begin(), pos.end()) - pos.begin();
    map < int, int > new_id;
    for (int i = 0; i < new_size; ++i)
        new_id[pos[i]] = i;

    vector < int > update(new_size);
    for (int i = 0; i < m; ++i)
    {
        // Nếu update đoạn [u, v] mà u <= v thì không có gì đặc biệt.
        if (q[i].first <= q[i].second)
        {
            update[new_id[q[i].first]]++;
            update[new_id[q[i].second + 1]]--;
        }
        // Nếu update đoạn [u, v] mà u > v thì tách làm 2 đoạn: u -> n và 1 -> v.
        else
        {
            update[new_id[q[i].first]]++;
            update[new_id[n + 1]]--;
            update[new_id[1]]++;
            update[new_id[q[i].second + 1]]--;
        }
    }

    // Update cộng dồn từ trước ra sau.
    for (int i = 1; i < new_size; ++i)
        update[i] += update[i - 1];

    print_result(new_size, update, pos);
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // Nhập truy vấn và đẩy đầu mút của các đoạn update vào một mảng pos.
    // Lát nữa sẽ rời rạc hóa các vị trí này ra bằng map để xử lý.
    vector < pair < int, int > > q(m + 1);
    vector < int > pos;
    for (int i = 0; i < m; ++i)
    {
        // Khi nhập truy vấn [u, v] thì đẩy các giá trị (u, v + 1) vào mảng pos
        // để xử lý bằng kĩ thuật range update.
        cin >> q[i].first >> q[i].second;

        // Nếu update đoạn [u, v] mà u <= v thì không có gì đặc biệt.
        if (q[i].first <= q[i].second)
        {
            pos.push_back(q[i].first);
            pos.push_back(q[i].second + 1);
        }
        // Nếu update đoạn [u, v] mà u > v thì tách làm 2 đoạn: u -> n và 1 -> v.
        else
        {
            pos.push_back(q[i].first);
            pos.push_back(n + 1);
            pos.push_back(1);
            pos.push_back(q[i].second + 1);
        }
    }

    solution(n, m, q, pos);
}
