#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e5 + 10;
int n, m;
vector < pair < int, int > > schedule[maxn];

void enter()
{
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int a, b, t;
        cin >> a >> b >> t;

        schedule[t].push_back({a, b});
    }
}

bool cmp(pair < int, int > a, pair < int, int > b)
{
    return a.second < b.second;
}

void solution()
{
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (schedule[i].empty())
            continue;
            
        sort(schedule[i].begin(), schedule[i].end(), cmp);

        ++res;
        int last_pos = 0;
        for (int j = 1; j < schedule[i].size(); ++j)
            if (schedule[i][j].first >= schedule[i][last_pos].second)
            {
                last_pos = j;
                ++res;
            }
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}