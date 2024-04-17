#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>

using namespace std;

bool check(int L, int n, int k, vector < int > &l)
{
    int total = 0;
    for (int i = 1; i <= n; ++i)
        total += l[i] / L;

    return total >= k;
}

void solution(int n, int k, vector < int > &l)
{
    int res = 0;

    int low = 1, high = *min_element(l.begin() + 1, l.end());
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (check(mid, n, k, l))
            res = mid, low = mid + 1;
        else 
            high = mid - 1;
    }
    
    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector < int > l(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> l[i];
    
    solution(n, k, l);

    return 0;
}