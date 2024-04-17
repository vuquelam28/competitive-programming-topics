#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 101;
int n, a[maxn];

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution()
{
    int res = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (a[i - 1] == 0 && a[i] == 0)
        {
            cout << -1 << endl;
            return;
        }

        if (a[i] == 1 && a[i - 1] == 1)
            res += 5;
        else if (a[i] == 1)
            res += 1;
    }

    cout << res + (a[1] == 1) << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        enter();
        solution();
    }

    return 0;
}