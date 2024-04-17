#include <bits/stdc++.h>

using namespace std;

int n, m;

long long sum = 0;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    vector <long long> a(n);
    for(auto &x : a){cin >> x; sum += x;}
    sort(a.begin(), a.end());
    cin >> m;
    while(m--)
    {
        long long def, act; cin >> def >> act;
        int i = (lower_bound(a.begin(), a.end(), def) - a.begin());
        long long ans = 2e18;
        if(i > 0) ans = min(ans, def - a[i - 1] + max(0LL, act - sum + a[i - 1]));
        if(i < n) ans = min(ans, max(0LL, act - sum + a[i]));
        cout << ans << '\n';
    }
}


