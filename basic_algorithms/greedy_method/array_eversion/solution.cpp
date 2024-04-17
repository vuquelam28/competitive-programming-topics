#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 2e5 + 10;
int n, a[maxn];

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution()
{
    int max_v = *max_element(a + 1, a + n + 1);

    if (a[n] == max_v)
    {
        cout << 0 << endl;
        return;
    }

    int res = 0;

    int pivot = n;
    for (int i = pivot - 1; i >= 1; --i)
    {
        if (a[i] > a[pivot])
        {
            pivot = i;
            ++res;
        }

        if (a[i] == max_v)
            break;
    }

    cout << res << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest = 1;

    while (ntest--)
    {
        enter();
        solution();
    }

    return 0;
}


