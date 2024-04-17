#include <bits/stdc++.h>
#define task "TALENT."
#define int long long
#define ff(i, a, b) for (int i = a; i <= (int) b; ++i)
#define fd(i, a, b) for (int i = a; i >= (int) b; --i)
#define rep(i, a, b) for (int i = a; i < (int) b; ++i)
#define inf 1e9 + 7
#define pb push_back
#define x first
#define y second

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair < int, int > II;
typedef pair < ll, ll > PLL;
typedef pair < double, int > DI;

const int maxn = 1e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m, idea[maxn], temp[maxn];
II sum[maxn], place[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);

    scanf("%lld%lld", &n, &m);
    ff(i, 1, n) scanf("%lld", &place[i].x);
    ff(i, 1, n) scanf("%lld", &place[i].y);
    ff(i, 1, m) scanf("%lld", idea + i);
}

int bs(int start, int finish, int val)
{
    int l = start, r = finish, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (place[mid].x <= val)
            ans = mid, l = mid + 1;
        else r = mid - 1;
    }
    return ans;
}

void sub34()
{
    sort(place + 1, place + 1 + n);
    ff(i, 1, n)
    {
        temp[i] = place[i].x * place[i].y;
        sum[i].x = sum[i - 1].x + place[i].y; 
        sum[i].y = sum[i - 1].y + temp[i];
    }
    ff(i, 1, m)
    {
        int p = bs(1, n, idea[i]);
        int res = (idea[i] * (sum[p].x) - sum[p].y) + ((sum[n].y - sum[p].y) - (idea[i] * (sum[n].x - sum[p].x)));
        printf("%lld\n", res);
    }
}

main()
{
    enter();
    sub34();
    return 0;
}


