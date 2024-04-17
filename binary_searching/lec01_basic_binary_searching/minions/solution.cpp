#include <bits/stdc++.h>
#define int long long
#define task "Minions."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1e5 + 10;
int N, s[maxn], sum[maxn], vote[maxn];

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        cin >> s[i];
        sum[i] = sum[i - 1] + s[i];
    }
}

void solution()
{
    fill(vote, vote + 1 + N, 0);

    for (int j = 1; j <= N; ++j)
    {
        int pos_left = 0, pos_right = 0;
        int l = 1, r = j - 1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (s[j] >= sum[j - 1] - sum[mid])
            {
                pos_left = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        l = j + 1, r = N;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (s[j] >= sum[mid - 1] - sum[j])
            {
                pos_right = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        if (pos_left != 0)
            vote[pos_left]++, vote[j]--;
        if (pos_right != 0)
            vote[j + 1]++, vote[pos_right + 1]--;
    }

    for (int i = 1; i <= N; ++i)
    {
        vote[i] += vote[i - 1];
        cout << vote[i] << ' ';
    }
    cout << endl;
}

main()
{
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


