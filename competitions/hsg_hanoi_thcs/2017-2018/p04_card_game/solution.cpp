#include <bits/stdc++.h>
#define task "CARDGAME."
#define inf 1e9 + 7

using namespace std;
const int maxn = 301;
int m, n, k, maxValue, cnt[100001], a[maxn][maxn];
vector < int > appearList;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            maxValue = max(maxValue, a[i][j]);
            cnt[a[i][j]]++;
        }
}

bool cmp(int A, int B)
{
    return A > B;
}

void solve()
{
    for (int i = 1; i <= maxValue; ++i)
        if (cnt[i] != 0)
            appearList.push_back(cnt[i]);
    sort(appearList.begin(), appearList.end(), cmp);

    int cntCard = 0;
    for (int i = 0; i < k && i < appearList.size(); ++i)
        cntCard += appearList[i];

    cout << cntCard;
}

int main()
{
    enter();
    solve();
    return 0;
}


