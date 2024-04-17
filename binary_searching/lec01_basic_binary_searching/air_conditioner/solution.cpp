#include <iostream>
#include <ios>
#include <bitset>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cmath>
#include <climits>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>
#include <functional>
//#include <unordered_map>
//#include <unordered_set>
#define task "Bai2_1516."
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
int a[maxn], mincost[maxn], n, m;
II ac[maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    scanf("%d", &n);
    ff(i, 1, n) scanf("%d", a + i);
    scanf("%d", &m);
    ff(i, 1, m) scanf("%d%d", &ac[i].x, &ac[i].y);
}

int bs(int start, int finish, int val)
{
    int l = start, r = finish, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (ac[mid].x >= val)
            ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    return ans;
}

void solve()
{
    sort(ac + 1, ac + 1 + m);
    mincost[m + 1] = inf;
    fd(i, m, 1) 
	mincost[i] = min(mincost[i + 1], ac[i].y);
    int res = 0;
    ff(i, 1, n)
    {
        int pos = bs(1, m, a[i]);
        res += mincost[pos];
    }
    printf("%d", res);
}

int main()
{
    enter();
    solve();
    return 0;
}


