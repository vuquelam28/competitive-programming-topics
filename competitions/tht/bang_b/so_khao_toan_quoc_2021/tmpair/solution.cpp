#include <bits/stdc++.h>
#define int long long
#define task "tmpair."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
int N;
set < pair < int, int > > team_pairs;

void enter()
{
    cin >> N;
}

void solution()
{
    for (int i = 1; i * i <= N; ++i)
        if (N % i == 0)
        {
            int a1 = i, b1 = (N / i - 1) * a1;
            int a2 = (N / i), b2 = (i - 1) * a2;

            if (a1 != 0 && b1 != 0)
            {
                team_pairs.insert({a1, b1});
                team_pairs.insert({b1, a1});
            }
            if (a2 != 0 && b2 != 0)
            {
                team_pairs.insert({a2, b2});
                team_pairs.insert({b2, a2});
            }
        }

    cout << team_pairs.size();
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


