#include <bits/stdc++.h>
#define task "HCN."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 6000;
struct cherry
{
    int val, pos, type;
};
int n, start[maxn], mark[maxn][maxn];
vector < cherry > tmp;
pair < int, int > p[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i].x >> p[i].y;
        tmp.push_back({p[i].x, i, 1});
        tmp.push_back({p[i].y, i, 2});
    }
}

bool cmp1(cherry A, cherry B)
{
    return A.val < B.val;
}

bool cmp2(pair < int, int > A, pair < int, int > B)
{
    return (A.x < B.x || (A.x == B.x && A.y < B.y));
}

void discretization() // Ki thuat roi rac hoa, hoc o mot bai rieng
{
    sort(tmp.begin(), tmp.end(), cmp1);
    int d = 0;
    (tmp[0].type == 1) ? p[tmp[0].pos].x = 0 : p[tmp[0].pos].y = 0;

    for (int i = 1; i < tmp.size(); ++i)
        if (tmp[i].val != tmp[i - 1].val)
            (tmp[i].type == 1) ? p[tmp[i].pos].x = ++d : p[tmp[i].pos].y = ++d;
        else
            (tmp[i].type == 1) ? p[tmp[i].pos].x = d : p[tmp[i].pos].y = d;

    sort(p + 1, p + 1 + n, cmp2);
}

void solve()
{
    start[1] = 1;
    for (int i = 2; i <= n; ++i)
        if (p[i].x != p[i - 1].x)
            start[i] = i;
        else start[i] = start[i - 1];

    int res = 0;
    for (int i = 2; i <= n; ++i)
        for (int j = start[i]; j < i; ++j)
        {
            res += mark[p[i].y][p[j].y];
            mark[p[i].y][p[j].y]++;
        }

    cout << res;
}

int main()
{
    enter();
    discretization();
    solve();
    return 0;
}