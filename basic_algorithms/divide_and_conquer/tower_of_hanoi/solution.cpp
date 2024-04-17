#include <bits/stdc++.h>
#define task "HNTower."
#define inf 1e9 + 7

using namespace std;
int n, cnt, col1 = 1, col2 = 2, col3 = 3;

void enter()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
}

void solve(int n, int Nguon, int Dich, int TG)
{
    if (n == 1)
        cout << "Step " << ++cnt << ": " << Nguon << "->" << Dich << endl;
    else
    {
        solve(n - 1, Nguon, TG, Dich);
        solve(1, Nguon, Dich, TG);
        solve(n - 1, TG, Dich, Nguon);
    }
}

int main()
{
    enter();
    solve(n, col1, col2, col3);
    return 0;
}