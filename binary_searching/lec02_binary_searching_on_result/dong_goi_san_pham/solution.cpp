//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

bool valid(int n, int k, vector < int > &a, int weight)
{
    int i = 0, t = 0, boxes = 0;
    while (i < n)
    {
        if (a[i + 1] > weight)
            return false;

        while (i < n && t + a[i + 1] <= weight)
            t += a[++i];

        ++boxes;
        t = 0;
    }

    return boxes <= k;
}

void solution(int n, int k, vector < int > &a)
{
    int res = 0;

    int l = 1, r = 1e9;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (valid(n, k, a, mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << res;
}

main()
{
    int n, k;
    cin >> n >> k;

    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    solution(n, k, a);
}