#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int n, int a, int b, vector < pair < int, int > >& trees)
{
    sort(trees.begin() + 1, trees.end());

    int res = INT_MAX;
    for (int i = 1; i <= n; ++i)
    {
        int cedrus = 0, bamboo = 0;
        for (int j = i; j <= n; ++j)
        {
            cedrus += (trees[j].second == 1);
            bamboo += (trees[j].second == 2);

            if (cedrus >= a && bamboo >= b)
            {
                res = min(res, trees[j].first - trees[i].first);
                break;
            }
        }

        if (cedrus < a || bamboo < b)
            break;
    }

    if (res == INT_MAX)
        cout << -1;
    else
        cout << res;
}

main()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector < pair < int, int > > trees(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> trees[i].first >> trees[i].second;

    solution(n, a, b, trees);

    return 0;
}