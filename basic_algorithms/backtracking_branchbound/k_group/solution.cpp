#pragma GCC optimize("O3","unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>

using namespace std;
int n, k, x[11], a[11];
int group_sum[11];
vector < int > group_elements[11];

void check_solution()
{
    for (int i = 1; i <= k; ++i)
        group_sum[i] = 0;
    
    for (int i = 1; i <= n; ++i)
        group_sum[x[i]] += a[i];
        
    bool ok = true;
    set < int > number_of_groups(x + 1, x + n + 1);
    ok = (number_of_groups.size() == k);

    if (ok)
    {
        for (int i = 2; i <= k; ++i)
            if (group_sum[i] != group_sum[1])
            {
                ok = false;
                break;
            }
    }

    if (ok)
    {
        cout << group_sum[1];
        exit(0);    
    }
}

void backtrack(int i)
{
    for (int j = 1; j <= k; ++j)    
    {
        x[i] = j;
        
        if (i == n)
            check_solution();
        else 
            backtrack(i + 1);
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k;
    
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    
    backtrack(1);
    
    cout << -1;

    return 0;
}



