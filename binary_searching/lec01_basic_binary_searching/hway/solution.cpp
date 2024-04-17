#include <bits/stdc++.h>
#define task "HWAY."
#define int long long
#define sqr(x) ((x) * (x))
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

const int maxn = 2e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, ntest, h[maxn], sum[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) 
        cin >> h[i];

    cin >> ntest;
}

void data_preparation()
{    
    sort(h + 1, h + 1 + n);
    for(int i = 1; i <= n; ++i)
        sum[i] = sum[i - 1] + h[i];
}

void solve(int c)
{
    int pos = upper_bound(h + 1, h + 1 + n, c) - h - 1;
    cout << c * pos - sum[pos] << " " << sum[n] - sum[pos] - c * (n - pos) << endl;
}

main()
{
    enter();
    data_preparation();
    
    while (ntest--)
    {
        int c;
        cin >> c;

        solve(c);
    }

    return 0;
}


