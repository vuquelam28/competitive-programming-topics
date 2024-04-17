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
#define task "SOGANNHAT."
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

const int maxn = 1000 + 10;
const int dd[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int a[maxn];
char s[maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    scanf("%s", s + 1);
}

void solve()
{
    int l = strlen(s + 1), pos = 0;
    ff(i, 1, l) a[i] = s[i] - '0';
    fd(i, l, 2)
        if (a[i] > a[i - 1])
        {
            pos = i - 1;
            break;
        }
    if (!pos) { printf("0"); return; }
    int temp = pos + 1;
    ff(i, pos + 2, l)
        if (a[i] > a[pos] && a[temp] > a[i]) temp = i;
    swap(a[temp], a[pos]);
    sort(a + 1 + pos, a + 1 + l);
    ff(i, 1, l) printf("%d", a[i]);
}

int main()
{
    enter();
    solve();
    return 0;
}

