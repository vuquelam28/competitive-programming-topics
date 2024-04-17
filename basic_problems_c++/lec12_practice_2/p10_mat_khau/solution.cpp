#include <bits/stdc++.h>
#define task "Password."
#define inf 1e9 + 7

using namespace std;

string s;

void enter()
{
    cin >> s;
}

void solve()
{
    int i = 0;
    long long res = 0;
    while (i < s.size())
    {
        long long num = 0;
        if ('0' <= s[i] && s[i] <= '9')
        {
            while (i < s.size() && '0' <= s[i] && s[i] <= '9')
            {
                num = num * 10 + (s[i] - '0');
                ++i;
            }
            
            res += num;
        }
        else while (i < s.size() && (s[i] < '0' || s[i] > '9')) ++i;
    }
    cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}



