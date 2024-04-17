#include <bits/stdc++.h>
#define int long long
#define task "Bai2_1718."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1e5 + 10;
int M, N, a[maxn], b[maxn];

void enter()
{
    cin >> M >> N;

    for (int i = 1; i <= M; ++i)
        cin >> a[i];
    for (int i = 1; i <= N; ++i)
        cin >> b[i];
}

bool check(int max_ans)
{
    if (2 * max_ans > M)
        return false;

    vector < int > low, high;
    for (int i = 1; i <= max_ans; ++i)
        low.push_back(a[i]);
    for (int i = M - max_ans + 1; i <= M; ++i)
        high.push_back(a[i]);

    // Do dãy B đã sắp xếp tăng dần, low[i] <= low[i + 1] và high[i] <= high[i + 1] nên các phần tử b[j] được chọn cũng
    // sẽ tăng dần -> chỉ cần dịch con trỏ j trên mảng B lên để tìm được phần tử b[j] ứng với mỗi cặp low[i] - high[i].
    int j = 1, total_triad = 0;
    for (int i = 0; i < max_ans; ++i)
    {
        if (low[i] < b[j] && b[j] < high[i])
        {
            ++total_triad;
            ++j;
        }
        else
        {
            while (j <= N && (b[j] < low[i] || b[j] > high[i]))
                ++j;

            if (j > N)
                break;

            ++total_triad;
            ++j;
        }
    }

    return (total_triad == max_ans);
}

void solution()
{
    sort(a + 1, a + 1 + M);
    sort(b + 1, b + 1 + N);

    int l = 0, r = N, res = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


