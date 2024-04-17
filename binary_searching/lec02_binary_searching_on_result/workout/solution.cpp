#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &n, int &k, vector < int > &exercises)
{
    cin >> n >> k;

    exercises.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> exercises[i];
}

bool check(int n, int k, vector < int > &exercises, int limit)
{
    int added_exercises = 0;
    for (int i = 1; i < n; ++i)
        if (exercises[i + 1] - exercises[i] > limit)
        {
            if ((exercises[i + 1] - exercises[i]) % limit == 0)
                added_exercises += ((exercises[i + 1] - exercises[i]) / limit - 1);
            else
                added_exercises += ((exercises[i + 1] - exercises[i]) / limit);
        }

    return added_exercises <= k;
}

void query(int n, int k, vector < int > &exercises)
{
    int l = 1, r = 1;
    for (int i = 1; i < n; ++i)
        r = max(r, exercises[i + 1] - exercises[i]);

    int res = 0;
    while (l <= r)
    {
        int mid = (l + r) >> 1;

        if (check(n, k, exercises, mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << res << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    vector < int > exercises;

    enter(n, k, exercises);
    query(n, k, exercises);

    return 0;
}