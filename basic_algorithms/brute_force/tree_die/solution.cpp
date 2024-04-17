#include <bits/stdc++.h>
#define task "TREEDIE."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1e5 + 10;
int N, isDie[maxn];
pair < int, int > a[maxn];

void enter()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
}

bool cmp(pair < int, int > A, pair < int, int > B)
{
    return (A.first < B.first || (A.first == B.first && A.second < B.second));
}

void solve()
{
    int res = 0;

    sort(a + 1, a + 1 + N, cmp);
    for (int i = 1; i <= N; ++i)
        if (isDie[a[i].second] == 0)
        {
            isDie[a[i].second] = isDie[a[i].second + 1] = isDie[a[i].second - 1] = 1;
            ++res;
        }

    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solve();
    return 0;
}


