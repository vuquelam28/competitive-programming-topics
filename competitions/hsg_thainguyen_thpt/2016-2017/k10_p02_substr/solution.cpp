#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
#define int long long

using namespace std;

void solution(int k, string &s)
{
    s = ' ' + s;
    int n = s.size() - 1;

    vector < int > prefix_sum(n + 1);
    for (int i = 1; i <= n; ++i)
        if (s[i] == '0')
            prefix_sum[i] = prefix_sum[i - 1];
        else
            prefix_sum[i] = prefix_sum[i - 1] + 1;

    int res = 0;
    map < int, int > cnt;
    cnt[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        res += cnt[prefix_sum[i] - k];
        ++cnt[prefix_sum[i]];
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s;
    cin >> k >> s;

    solution(k, s);

    return 0;
}