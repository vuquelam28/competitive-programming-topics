#include <bits/stdc++.h>
#define int long long
#define task "Mintime."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 1e6 + 10;
int N, M, t[maxN];

void enter()
{
    cin >> N >> M;

    for (int i = 1; i <= M; ++i)
        cin >> t[i];
}

bool checkValid(int timeVal)
{
    int presents = 0;

    for (int i = 1; i <= M; ++i)
        presents += (timeVal / t[i]);

    return presents >= N;
}

void solution()
{
    int bestTime = 0, l = 1, r = 1e11;

    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (checkValid(mid))
        {
            bestTime = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << bestTime;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


