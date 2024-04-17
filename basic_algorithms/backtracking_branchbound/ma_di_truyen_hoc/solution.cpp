#include <bits/stdc++.h>
using namespace std;

string s, t;
int f[21];
int n;

void back_tracking(int x)
{
    if(x == n)
    {
        for(int i = 0; i < n; ++i)
        {
            if(f[i] == 0) cout << s[i];
            else cout << t[i];
        }
        cout << '\n';
        return;
    }
    int lim = 1;
    if(s[x] == t[x]) lim = 0;
    for(int i = 0; i <= lim; ++i)
    {
        f[x] = i;
        back_tracking(x + 1);
    }
}

int main() 
{
    cin >> n;
    cin >> s >> t;
    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        cnt += (s[i] != t[i]);
        if(s[i] > t[i]) swap(s[i], t[i]);
    }
    cout << (1 << cnt) << '\n';
    back_tracking(0);
    return 0;
}
