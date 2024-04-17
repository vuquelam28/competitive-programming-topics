#include <bits/stdc++.h>
#define int long long
#define task "cutting_trees."

using namespace std;

const int maxn = 1e6 + 10;
int n, m, h[maxn];

void enter()
{
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        cin >> h[i];
}

bool check(int cutting_height)
{
    int total_wood_received = 0;
    for (int i = 1; i <= n; ++i)
        if (h[i] > cutting_height)
            total_wood_received += (h[i] - cutting_height);

    return (total_wood_received >= m);
}

void solution()
{
    int res = 0;

    int l = 1, r = *max_element(h + 1, h + n + 1);
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
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}