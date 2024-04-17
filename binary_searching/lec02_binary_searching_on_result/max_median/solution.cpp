#include <bits/stdc++.h>
#define int long long
#define task "max_median."

using namespace std;

void enter(int &n, int &k, vector < int > &a)
{
    cin >> n >> k;

    a.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

bool check(int n, int k, vector < int > &a, int median)
{
    int prefix_sum = 0;
    vector < int > min_sum(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        prefix_sum = prefix_sum + ((a[i] >= median) ? 1 : -1);
        min_sum[i] = min(min_sum[i - 1], prefix_sum);

        if (i >= k && prefix_sum - min_sum[i - k] > 0)
            return true;
    }

    return false;
}


void solution(int n, int k, vector < int > &a)
{
    int res = 0;

    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(n, k, a, mid))
            res = mid, l = mid + 1;
        else
            r = mid - 1;
    }

    if (!res)
        cout << -1;
    else
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