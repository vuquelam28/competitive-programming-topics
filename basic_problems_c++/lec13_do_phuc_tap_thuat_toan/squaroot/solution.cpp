#include <bits/stdc++.h>
#define task "SquareRoot."
#define inf 1e9 + 7
#define x first
#define y second
#define int long long

using namespace std;
int N;

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> N;
}

bool isSquareNum(int N)
{
    return ((double)sqrt(N) == (int)sqrt(N));
}

void solve()
{
    int maxOut = 0;

    for (int i = 1; i <= sqrt(N); ++i)
        if (N % i == 0)
        {
            int j = N / i;
            if (isSquareNum(i))
                maxOut = max(maxOut, i);
            if (isSquareNum(j))
                maxOut = max(maxOut, j);
        }

    cout << (int)sqrt(maxOut);
}

main()
{
    enter();
    solve();
    return 0;
}