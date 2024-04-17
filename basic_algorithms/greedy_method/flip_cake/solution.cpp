#include <bits/stdc++.h>
#define int long long
#define task "FlipCake."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
string s;
int K;

void enter()
{
    cin >> s >> K;
    s = ' ' + s;
}

void solution()
{
    int flip_times = 0, N = s.size() - 1;
    for (int i = 1; i <= N - K + 1; ++i)
        if (s[i] == '-')
        {
            ++flip_times;

            for (int j = i; j <= i + K - 1; ++j)
                s[j] = (s[j] == '-') ? '+' : '-';
        }

    for (int i = 1; i <= N; ++i)
        if (s[i] == '-')
        {
            cout << "IMPOSSIBLE" << endl;
            return;
        }

    cout << flip_times << endl;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        enter();
        solution();
    }

    return 0;
}


