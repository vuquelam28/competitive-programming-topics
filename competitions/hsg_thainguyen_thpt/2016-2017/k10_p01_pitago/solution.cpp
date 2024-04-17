#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxv = 10000;
int a[10001], cnt[10001];

int is_squared_num(int n)
{
    int squaroot = sqrt(n);
    if (squaroot * squaroot == n && squaroot <= maxv)
        return squaroot;
    else
        return -1;
}

void solution(int n)
{
    int res = 0;
    for (int i = 1; i < n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            int k = is_squared_num(a[i] * a[i] + a[j] * a[j]);
            if (k != -1)
                res += (cnt[k] - (k == a[i]) - (k == a[j]));
        }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        ++cnt[a[i]];
    }

    solution(n);

    return 0;
}