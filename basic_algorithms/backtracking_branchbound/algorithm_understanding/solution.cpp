#include <bits/stdc++.h>
#define int long long
#define task "algorithm_understanding."
#define inf 1e9 + 7

using namespace std;

const int maxn = 15;
int n, m, x, chosen[maxn], a[maxn][maxn];
int minimum_total_money = LLONG_MAX;

void enter()
{
    cin >> n >> m >> x;

    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            cin >> a[i][j];
}

// Kiểm tra phương án mua sách hiện tại có hợp lệ hay không.
void check_solution(int x)
{
    vector < int > understand(m + 1, 0);
    int total_money = 0;
    for (int i = 1; i <= n; ++i)
        if (chosen[i])
        {
            total_money += a[i][0];

            for (int j = 1; j <= m; ++j)
                understand[j] += a[i][j];
        }

    bool valid = true;
    for (int i = 1; i <= m; ++i)
        if (understand[i] < x)
        {
            valid = false;
            break;
        }

    if (valid)
        minimum_total_money = min(minimum_total_money, total_money);
}

// Quay lui thử tất cả các phương án mua sách.
void backtrack(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        chosen[i] = j;

        if (i == n)
            check_solution(x);
        else
            backtrack(i + 1);
    }
}

void solution()
{
    backtrack(1);

    if (minimum_total_money == LLONG_MAX)
        cout << -1;
    else
        cout << minimum_total_money;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}