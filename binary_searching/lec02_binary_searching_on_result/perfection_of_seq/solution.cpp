#include <bits/stdc++.h>
#define int long long
#define task "DHH."
#define inf 1e18
#define x first
#define y second

using namespace std;
const int maxN = 1e5 + 10;
int N, K, a[maxN], sum[maxN];

void enter()
{
    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
}

void solution()
{
    int i = 0, j = 1, maxPerfect = 0;
    while (j <= N && sum[j] - sum[i] < K)
        ++j;

    while (i < j && j <= N)
    {
        int old_i = i;
        maxPerfect = max(maxPerfect, (sum[j] - sum[i]) / (j - i));

        while (i + 1 < j && sum[j] - sum[i + 1] >= K)
        {
            ++i;
            maxPerfect = max(maxPerfect, (sum[j] - sum[i]) / (j - i));
        }

        if (i == old_i)
            ++j;
        else
        {
            while (j <= N && sum[j] - sum[i] < K)
                ++j;
        }
    }

    cout << maxPerfect << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}