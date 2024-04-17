#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 21;
int n, minimum_reverse_times = 50, minimum_diff = 1000;
int x[maxn];
pair < int, int > domino[maxn];

void enter()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> domino[i].first >> domino[i].second;
}

void check_solution()
{
    int total_reverse_times = 0;

    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; ++i)
        if (x[i] == 1)
        {
            sum1 += domino[i].second;
            sum2 += domino[i].first;

            ++total_reverse_times;
        }
        else
        {
            sum1 += domino[i].first;
            sum2 += domino[i].second;
        }

    if (abs(sum1 - sum2) < minimum_diff)
    {
        minimum_diff = abs(sum1 - sum2);
        minimum_reverse_times = total_reverse_times;
    }
    else if (abs(sum1 - sum2) == minimum_diff)
        minimum_reverse_times = min(minimum_reverse_times, total_reverse_times);
}

void backtrack(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        x[i] = j;

        if (i == n)
            check_solution();
        else
            backtrack(i + 1);
    }
}

void solution()
{
    backtrack(1);

    cout << minimum_diff << ' ' << minimum_reverse_times;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}


