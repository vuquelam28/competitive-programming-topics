#include <bits/stdc++.h>
#define int long long
#define task "Orange."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 1e5 + 10;
int N, p[maxN];

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
        cin >> p[i];
}

void solution()
{

    sort(p + 1, p + 1 + N);

    int maximumMoney = 0;
    p[N + 1] = p[N] + 1;

    for (int i = N; i >= 1; --i)
    {
        if (p[i] != p[i + 1])
            maximumMoney = max(maximumMoney, p[i] * (N - i + 1));
        else
            maximumMoney = max(maximumMoney, (p[i] - 1) * (N - i + 1));
    }

    cout << maximumMoney;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


