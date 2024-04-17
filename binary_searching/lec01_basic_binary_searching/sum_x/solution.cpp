#include <bits/stdc++.h>
#define task "SUMX."
#define int long long

using namespace std;

const int maxn = 1e6 + 10;
int n, a[maxn], x;

void enter()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    
    cin >> x;
}

void solve()
{
    sort(a + 1, a + 1 + n);
    
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        int l = 1, r = n, pos = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == x - a[i])
            {
                ++res;
                break;
            }
            
            if (a[mid] < x - a[i])
                l = mid + 1;
            else 
                r = mid - 1;
        }
    }
    
    cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}

