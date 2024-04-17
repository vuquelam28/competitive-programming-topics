#include <bits/stdc++.h>
#define task "Madituan."
#define inf 1e9 + 7

using namespace std;
const int step[8][2] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};
const int maxn = 9;
int n, StepUsed = 1, mark[maxn][maxn];

void enter()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
}

void printf_result()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << mark[i][j] << ' ';
        cout << endl;
    }
}

void solve(int x, int y)
{
    mark[x][y] = StepUsed;
    if (StepUsed == n * n)
    {
        printf_result();
        exit(0);
    }
    for (int i = 0; i <= 7; ++i)
    {
        int next_x = x + step[i][0], next_y = y + step[i][1];
        if (next_x > 0 && next_y > 0 && next_x <= n && next_y <= n && !mark[next_x][next_y])
        {
            ++StepUsed;
            solve(next_x, next_y);
            mark[next_x][next_y] = 0;
            --StepUsed;
        }
    }
}

int main()
{
    enter();
    if (n == 1)
    {
        cout << -1;
        return 0;
    }
    solve(1, 1);
    cout << -1;
    return 0;
}
