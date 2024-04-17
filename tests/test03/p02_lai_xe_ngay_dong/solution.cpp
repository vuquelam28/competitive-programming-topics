#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 2e5 + 10;
int n, k, t[maxn];
vector < int > neg_days;

void enter()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> t[i];
        if (t[i] < 0)
            neg_days.push_back(i);
    }
}

void solution()
{
    if (neg_days.size() > k)
    {
        cout << -1;
        return;
    }

    if (neg_days.size() == 0)
    {
        cout << 0;
        return;
    }

    /*
       Nếu cứ tới một ngày nhiệt độ âm ta lại thay lốp, sau đó lại thay lại lốp mùa hè thì tốn tối đa 2 * (số ngày âm)
       lần thay. Để giảm số lần thay, ta sẽ đi liên tục bằng lốp mùa đông trong các đoạn mùa hè ở giữa 2 ngày âm liên tiếp. 
       Để số lần thay được giảm đi nhiều nhất thì ta sẽ ưu tiên đi liên tục trong các chuỗi ngày ngắn hơn.
    */
    k -= neg_days.size(); // Lốp mùa đông phải đi trong các ngày âm, vậy còn sử dụng được [k - (số ngày âm)] ngày.
    int change_turns = 2 * neg_days.size(); // Số lần tối đa phải thay lốp.
    vector < int > day_series;
    for (int i = 0; i < neg_days.size() - 1; ++i)
        day_series.push_back(neg_days[i + 1] - neg_days[i] - 1); // Tính độ dài chuỗi ngày giữa 2 ngày dộ âm.
    sort(day_series.begin(), day_series.end());

    for (int i = 0; i < day_series.size(); ++i)
        if (k >= day_series[i])
        {
            change_turns -= 2;
            k -= day_series[i];
        }
    // Nếu chuỗi ngày cuối cùng (từ ngày âm cuối tới hết) có thể đi được bằng lốp mùa đông thì giảm đc thêm 1 lần thay.
    if (n - neg_days.back() <= k)
        --change_turns;

    cout << change_turns;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}