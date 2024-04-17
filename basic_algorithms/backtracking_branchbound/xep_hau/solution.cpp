#include <bits/stdc++.h>
#define task "XEPHAU."
#define inf 1e9 + 7

using namespace std;
const int maxn = 11;
int n, cnt, res[maxn], markColumn[maxn], cheoChinh[maxn], cheoPhu[maxn];

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
    cout << ++cnt << ". ";
    for (int i = 1; i <= n; ++i)
        cout << res[i] << ' ';
    cout << endl;
}

bool check(int i, int k) // Kiem tra xem dat quan hau o hang thu k vao cot i co duoc hay khong
{
    if (markColumn[i] == 1 || cheoChinh[k - i] == 1 || cheoPhu[k + i] == 1)
        return false;
    return true;
}

void solve(int k) // Tim vi tri cot de dat quan hau tren hang thu k
{
    for (int i = 1; i <= n; ++i)
        if (check(i, k)) // Neu cot thu i phu hop thi thu dat quan hau vao cot do
        {
            res[k] = i;
            markColumn[i] = cheoChinh[k - i] = cheoPhu[k + i] = 1;
            if (k == n)
                printf_result();
            else solve(k + 1);
            markColumn[i] = cheoChinh[k - i] = cheoPhu[k + i] = 0;
        }
}

int main()
{
    enter();
    solve(1);
    return 0;
}

