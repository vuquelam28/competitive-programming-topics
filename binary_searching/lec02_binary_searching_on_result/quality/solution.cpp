#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxN = 1e5 + 10;
const double eps = 0.000001;
int N, K, minPos[maxN];
double a[maxN];
pair < double, int > sum[maxN];

void enter()
{
    cin >> N >> K;

    for (int i = 1; i <= N; ++i)
        cin >> a[i];
}

bool check(double averageVal)
{
    for (int i = 1; i <= N; ++i)
    {
        a[i] -= averageVal;
        sum[i] = {sum[i - 1].first + a[i], i};
        a[i] += averageVal;
    }
    sort(sum + 1, sum + 1 + N);

    for (int i = 1; i <= N; ++i)
    {
        if (sum[i].first >= 0 && sum[i].second >= K)
            return true;

        if (i > 1 && sum[i].second - minPos[i - 1] >= K)
            return true;

        minPos[i] = (i == 1) ? sum[i].second : min(minPos[i - 1], sum[i].second);
    }

    return false;
}

void solution()
{
    double t = accumulate(a + 1, a + 1 + N, 0);
    double l = -t, r = t, maxAverage = -t;

    while (r - l > eps)
    {
        double mid = (l + r) / 2;

        if (check(mid))
        {
            maxAverage = mid;
            l = mid;
        }
        else
            r = mid;
    }

    cout << fixed << setprecision(4) << maxAverage;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}


