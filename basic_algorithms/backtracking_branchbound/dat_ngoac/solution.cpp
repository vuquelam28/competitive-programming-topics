#include <bits/stdc++.h>
#define task "TAONGOAC."
#define inf 1e9 + 7

using namespace std;
const int maxn = 11;
int n, sum, mark[maxn];

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
    if (sum == 0)
    {
        for (int i = 1; i <= 2 * n; ++i)
            (mark[i] == 0) ? cout << '(' : cout << ')';
        cout << endl;
    }
}

void recur(int i)
{
    if (sum < 0) return;
    for (int j = 0; j <= 1; ++j)
    {
        mark[i] = j;
        sum = (j == 0) ? sum + 1 : sum - 1;
        if (i == 2 * n)
            printf_result();
        else recur(i + 1);
        sum = (j == 0) ? sum - 1 : sum + 1;
    }
}

int main()
{
    enter();
    recur(1);
    return 0;
}


