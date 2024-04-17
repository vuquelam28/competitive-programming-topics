#include <bits/stdc++.h>
#define task "Bai1_1516."
#define sz(a) a.size()
#define ff(i, a, b) for (int i = a; i <= (int) b; ++i)
#define fd(i, a, b) for (int i = a; i >= (int) b; --i)
#define rep(i, a, b) for (int i = a; i < (int) b; ++i)
#define inf 1e9 + 7
#define pb push_back
#define x first
#define y second
#define mp make_pair

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair < int, int > II;
typedef pair < ll, ll > PLL;
typedef pair < double, int > DI;

const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int a, b, c;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> a >> b >> c;
}

void solve()
{
    int res = 0;

    ff(i, 1, (c - b) / a)
    {
        int j = (c - a * i) / b;
        if (a * i + b * j == c && __gcd(i, j) == 1) 
	    ++res;
    }

    cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}