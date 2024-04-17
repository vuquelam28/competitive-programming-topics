#include <bits/stdc++.h>
#define task "Tohop."
#define inf 1e9 + 7

using namespace std;
const int maxn = 21;
int n, k, cnt, res[maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
}

void result()
{
    cout << ++cnt << ". ";
    for (int i = 1; i <= k; ++i)
        cout << res[i] << ' ';
    cout << endl;
}

void back_track(int i)
{
    for (int j = res[i - 1] + 1; j <= n - k + i; ++j)
    {
        res[i] = j;
        if (i == k) result();
        else back_track(i + 1);
    }
}

int main()
{
    enter();
    back_track(1);
    return 0;
}


