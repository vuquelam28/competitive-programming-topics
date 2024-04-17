#include <bits/stdc++.h>

using namespace std;

vector < int > preparation(int max_value, int n, vector < int > &a)
{
    vector < int > is_prime(max_value + 1, 1);
    is_prime[1] = 0;
    
    for (int i = 2; i * i <= max_value; ++i)
        if (is_prime[i] == 1)
            for (int j = i * i; j <= max_value; j += i)
                is_prime[j] = 0;
    
    vector < int > cnt(n + 1);
    for (int i = 1; i <= n; ++i)
        cnt[i] = (is_prime[a[i]]) ? cnt[i - 1] + 1 : cnt[i - 1];
    
    return cnt;
}

main()
{
    int n, m;
    cin >> n >> m;
    
    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    
    int max_value = *max_element(a.begin() + 1, a.end());
    vector < int > cnt = preparation(max_value, n, a);
    
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        
        cout << cnt[v] - cnt[u - 1] << '\n';
    }
    
    return 0;
}