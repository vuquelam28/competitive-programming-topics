#include <bits/stdc++.h>
#define task "Bai3_1516."
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

const int maxn = 1e5 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, d1, d2, cnt[101];
II male[maxn], female[maxn];
long long res;

void enter()
{
    ios_base::sync_with_stdio(false);
    scanf("%d", &n);
    int u, v, sex;
    ff(i, 1, n)
    {
        scanf("%d%d%d", &u, &v, &sex);
        if (sex == 1) male[++d1] = mp(u, v);
        else female[++d2] = mp(u, v);
    }
}

bool cmp1(II A, II B)
{
    if (A.x != B.x) return A.x < B.x;
    else return A.y < B.y;
}

bool cmp2(II A, II B)
{
    if (A.y != B.y) return A.y < B.y;
    else return A.x < B.x;
}

void solve(II tmp[], int d)
{
    sort(tmp + 1, tmp + 1 + d, cmp1);
    memset(cnt, 0, sizeof cnt);
    ff(i, 1, d)
        if (tmp[i].x == tmp[i - 1].x)
        {
            ff(j, 1, tmp[i].y - 1) res += cnt[j];
			cnt[tmp[i].y]++;
		}
        else memset(cnt, 0, sizeof cnt), cnt[tmp[i].y]++;

    memset(cnt, 0, sizeof cnt);
    sort(tmp + 1, tmp + 1 + d, cmp2);
    ff(i, 1, d)
        if (tmp[i].y == tmp[i - 1].y)
        {
			ff(j, 1, tmp[i].x - 1) res += cnt[j];
			cnt[tmp[i].x]++;
		}
        else memset(cnt, 0, sizeof cnt), cnt[tmp[i].x]++;
}

int main()
{
    enter();
    solve(male, d1); 
    solve(female, d2);
    printf("%lld", res);
    return 0;
}