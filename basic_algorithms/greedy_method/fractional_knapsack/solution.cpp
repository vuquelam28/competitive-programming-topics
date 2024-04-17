#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6 + 10;
int n, W;
pair < int, int > gem[maxn];

void enter()
{
    cin >> n >> W;

    for (int i = 1; i <= n; ++i)
        cin >> gem[i].first >> gem[i].second;
}

bool cmp(pair < int, int > a, pair < int, int > b)
{
    double r1 = (double) a.second / a.first;
    double r2 = (double) b.second / b.first;

    return r1 > r2;
}

void solution()
{
    sort(gem + 1, gem + n + 1, cmp);

    int cur_weight = 0;
    double maximum_total_value = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (cur_weight + gem[i].first <= W)
        {
            cur_weight += gem[i].first;
            maximum_total_value += gem[i].second;
        }
        else
        {
            int remain_weight = W - cur_weight;
            maximum_total_value += gem[i].second * ((double) remain_weight / gem[i].first);

            break;
        }
    }

    cout << fixed << setprecision(3) << maximum_total_value;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}