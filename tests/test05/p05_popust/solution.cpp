#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6;
int n, minpos, mina[maxn], sumb[maxn];
pair < int, int > price[maxn];
priority_queue < int, vector < int >, greater < int > > qu_min;

bool cmp(pair < int, int > A, pair < int, int > B) { return A.second < B.second; }

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> price[i].first >> price[i].second;
}

void data_preparation()
{
    sort(price + 1, price + 1 + n, cmp);
    mina[n] = price[n].first;
    minpos = 1;

    for (int i = 1; i <= n; ++i)
    {
        sumb[i] = sumb[i - 1] + price[i].second;
        if (price[i].first < price[minpos].first)
            minpos = i;
    }

    for (int i = 1; i <= minpos; ++i)
        qu_min.push(price[i].first - price[i].second);

    for (int i = n - 1; i > 0; --i)
        mina[i] = min(mina[i + 1], price[i].first);
}

void solution()
{
    cout << price[minpos].first << endl; // Tiền cần bỏ ra nếu ăn ở 1 bàn.
    for (int k = 2; k <= minpos; ++k) // Tiền cần bỏ ra nếu ăn ở k bàn, với 1 < k <= minpos.
        cout << price[minpos].first + sumb[k - 1] << endl;

    for (int k = minpos + 1; k <= n; ++k) // Tiền bỏ ra nếu ăn ở k bàn, với minpos < k <= n.
    {
        int min_cost = LLONG_MAX;

        min_cost = min(min_cost, sumb[k] + qu_min.top());
        min_cost = min(min_cost, sumb[k - 1] + mina[k]);

        qu_min.push(price[k].first - price[k].second);

        cout << min_cost << endl;
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    data_preparation();
    solution();

    return 0;
}