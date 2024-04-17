#include <bits/stdc++.h>
#define int long long 

using namespace std;

void solution(int n, vector < int > &a) 
{    
    int l = 1, r = 1;
    int tmp = INT_MIN, sum = 0, ok;
    while (r <= n) 
    {
        if (a[r] * a[l] >= 0) 
        {
            tmp = max(tmp, a[r]);
            r++;
            ok = 0;
        }
        else 
        {
            l = r;
            sum += tmp;
            tmp = INT_MIN;
            ok = 1;
        }

        if (!ok && r == n + 1) 
            sum += tmp;
    }
    
    cout << sum << "\n";
}

main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;   
        cin >> n;

        vector < int > a(n + 1);
        for (int i = 1; i <= n; i++) 
            cin >> a[i];

        solution(n, a);
    }

    return 0;
}