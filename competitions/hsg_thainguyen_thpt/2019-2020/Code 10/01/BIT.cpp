///HuDzG
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define HUNGIT "BIT"
#define F first
#define S second
#define pii pair<ll, ll>
#define nmax 1000005
#define OO 1000000000000000000
#define reset(a) memset(a, 0, sizeof(a))
#define AutoAC int main()

using namespace std;
ll n, k, res1, res2;
string s = "0", a;

void SUB1()
{
    while(s.length() < k)
    {
        a = "";
        for(ll i = 0; i < s.length(); i++)
            if(s[i] == '0') a += '1';
            else a += '0';
        s += a;
    }
    //cout << s[k - 1] << " ";
}

void SUB2()
{
    ll x = 1, dem = 0;
    while(x < k) x *= 2;
    x /= 2;
    while(k > 1)
    {
        if(k > x)
        {
            k -= x;
            dem++;
        }
        x /= 2;
    }
    cout << (dem % 2) << endl;
}

AutoAC
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen(HUNGIT".inp", "r", stdin);
    freopen(HUNGIT".out", "w", stdout);
    while(cin >> k)
    {
        //SUB1();
        SUB2();
        //if(res1 != res2) cout << k;
    }
    //cout << "AC";
    return 0;
}
