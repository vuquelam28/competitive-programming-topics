#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &n, int &k, vector < int > &a)
{
    cin >> n >> k;

    a.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

bool check(int n, int k, vector < int > &a, int x)
{
    int so_tap = 0;

    int i = 0, pages = 0;
    while (i < n)
    {
        if (a[i + 1] > x)
            return false;

        while (i < n && pages + a[i + 1] <= x)
        {
            ++i;
            pages += a[i];
        }

        ++so_tap;
        pages = 0;
    }

    return so_tap <= k;
}

void solution(int n, int k, vector < int > &a)
{
    int res = 0;

    int l = 1, r = accumulate(a.begin() + 1, a.end(), 0LL);
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(n, k, a, mid))
            res = mid, r = mid - 1;
        else
            l = mid + 1;
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    vector < int > a;

    enter(n, k, a);
    solution(n, k, a);

    return 0;
}