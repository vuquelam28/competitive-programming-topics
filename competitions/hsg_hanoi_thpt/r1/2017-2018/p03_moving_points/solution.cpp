#include <bits/stdc++.h>
#define int long long
#define task "Bai3_1718."
#define inf 1e9 + 7

using namespace std;
const int maxn = 2e5 + 10;
int N, T, moving_left_points;
pair < int, int > p[maxn];

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cin >> p[i].first >> p[i].second;
        if (p[i].second == -1)
            ++moving_left_points;
    }

    cin >> T;
}

void solution()
{
    stack < int > moving_right_points;
    sort(p + 1, p + 1 + N);

    for (int i = 1; i <= N; ++i)
        if (p[i].second == 1)
            moving_right_points.push(p[i].first);
        else
            if (!moving_right_points.empty() && p[i].first - moving_right_points.top() <= 2 * T)
            {
                moving_right_points.pop();
                --moving_left_points;
            }

    cout << moving_right_points.size() + moving_left_points;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


