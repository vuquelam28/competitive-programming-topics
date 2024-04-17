#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6 + 10;
int N, a[2 * maxn];

void enter()
{
    cin >> N;

    for (int i = 1; i <= 2 * N; ++i)
        cin >> a[i];
}

void solution()
{
    if (N > 1000) // In this case, a[i] = a[i - 1] + 1 and the answer is equal to the number of divisors of N.
    {
        int res = 0;
        for (int i = 1; i * i <= N; ++i)
            if (N % i == 0)
                res += 1 + (N / i != i);

        cout << res;
        return;
    }

    // Make a list of the all able differences between two elements in each group.
    vector < int > able_diff;
    sort(a + 1, a + 2 * N + 1);
    for (int i = 2; i <= 2 * N; ++i)
        able_diff.push_back(a[i] - a[1]);

    // Iterate through all the able differences, then try to split 2 * N elements into N group.
    int res = 0;
    for (int diff: able_diff)
    {
        // The array is_chosen[i] is used to mark the i-th element is chosen.
        int group = 0, is_chosen[2 * N + 1] = {};
        for (int i = 1; i <= 2 * N; ++i)
            if (!is_chosen[i])
            {
                int pos = lower_bound(a + i + 1, a + 2 * N + 1, a[i] + diff) - a;

                if (pos != 2 * N + 1 && a[pos] == a[i] + diff)
                {
                    is_chosen[i] = is_chosen[pos] = 1;
                    ++group;
                }
            }

        // If the number of group is N, then it's a valid way to split.
        res += (group == N);
    }

    cout << res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}
