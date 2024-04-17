#include <bits/stdc++.h>
#define int long long
#define task "playing_badminton."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

const int maxn = 1e5 + 10;
int n, k, a[maxn];

void enter()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution()
{
    if (k >= n - 1)
    {
        cout << n;
        return;
    }

    int winner = 0, consecutive_wining = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > winner)
        {
            winner = a[i];
            consecutive_wining = (i > 1) ? 1 : 0;
        }
        else
            ++consecutive_wining;

        if (consecutive_wining >= k)
        {
            cout << winner;
            return;
        }
    }

    cout << winner;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}


