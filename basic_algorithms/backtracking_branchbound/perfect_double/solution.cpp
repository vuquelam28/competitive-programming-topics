#include <bits/stdc++.h>
#define int long long
#define task "PerfectDouble."
#define inf 1e9 + 7

using namespace std;

int N;

int count_step(int a, int b)
{
    if (a == 1)
        return b - 1;

    if (a == 0)
        return inf;

    // Here we solve the problem for (b % a, a). From (b % a, a) to (a, b) needs b / a step.
    return b / a + count_step(b % a, a);
}

void solution(int N)
{
    if (N <= 2)
    {
        cout << N - 1;
        return;
    }

    int res = inf;
    for (int i = 2; i < N; ++i) // Try to create pair (i, N) from (1, 1) by dfs.
        res = min(res, count_step(i, N));

    cout << res;
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    solution(N);

    return 0;
}


