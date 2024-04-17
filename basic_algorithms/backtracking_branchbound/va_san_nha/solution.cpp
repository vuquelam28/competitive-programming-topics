#include <bits/stdc++.h>
using namespace std;

int n;
int a[11][11], r[11], c[11];
int ans = 100, tol = 0;

void back_track(int t, int s)
{
    if (t > n)
    {
        int cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if (a[i][j] == 1)
                    if (r[i] == 1 || c[j] == 1) 
                        ++cnt;
            }
        }
        
        if (cnt == tol) 
            ans = min(ans, s);
        
        return;
    }

    for(int x = 0; x <= 1; ++x)
        for(int y = 0; y <= 1; ++y) 
        {
            //x = 1 thì hàng t được vá, ngược lại không
            r[t] = x;
            //y = 1 thì cột t được vá, ngược lại không
            c[t] = y;
            back_track(t + 1, s + x + y);
        }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == 1) ++tol;
        }
    }
    back_track(1, 0);
    cout << ans;
    return 0;
}