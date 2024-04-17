#include <bits/stdc++.h>
#define int long long
#define task "aseq."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

const int maxn = 1e5 + 10;
int N, L, R, sum[maxn];

void enter()
{
    cin >> N >> L >> R;

    for (int i = 1; i <= N; ++i)
    {
        int a;
        cin >> a;

        sum[i] = sum[i - 1] + a;
    }
}

void solution()
{
    sort(sum + 1, sum + 1 + N);

    int res = 0;
    for (int i = 1; i <= N; ++i)
    {
        int pos_l = -1, pos_r = -1;

        int l = 1, r = i;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (sum[i] - sum[mid - 1] >= L)
            {
                pos_r = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        l = 1, r = i;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (sum[i] - sum[mid - 1] <= R)
            {
                pos_l = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        if (pos_l != -1 && pos_r != -1)
            res += (pos_r - pos_l + 1);
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


