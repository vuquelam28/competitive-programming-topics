#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &n, int &m, vector < int > &x)
{
    cin >> n >> m;

    x.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i];
}

bool check(int n, int m, vector < int > &x, int dist)
{
    int total_horses = 1;

    int i = 0, j = 1;
    while (i < n)
    {
        while (j < n && x[j] - x[i] < dist)
            ++j;

        if (j >= n)
            break;

        ++total_horses;
        i = j;
        ++j;
    }

    return total_horses >= m;
}

void solution(int n, int m, vector < int > &x)
{
    int res = 0;
    sort(x.begin(), x.end());

    int l = 1, r = 1e9;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(n, m, x, mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << res << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    vector < int > x;

    enter(n, m, x);
    solution(n, m, x);

    return 0;
}