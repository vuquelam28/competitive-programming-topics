#include <bits/stdc++.h>

using namespace std;

void enter(int &n, int &m, vector < int > &a)
{
    cin >> n >> m;
    
    a.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution(int n, int m, vector < int > &a)
{
    int res = 0;
    for (int i = 1; i < n; ++i)
    {
        int l = i + 1, r = n;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            
            if (a[mid] == a[i] + m)
            {
                ++res;
                break;
            }
            
            if (a[mid] < a[i] + m)
                l = mid + 1;
            else 
                r = mid - 1;
        }
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
    
    int n, m;
    vector < int > a;
    
    enter(n, m, a);
    solution(n, m, a);

    return 0;
}