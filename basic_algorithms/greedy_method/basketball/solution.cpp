#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e6;
int N, M;
vector < pair < int, int > > all_dis;

void enter()
{
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        int dis;
        cin >> dis;

        all_dis.push_back({dis, 1});
    }

    cin >> M;
    for (int i = 1; i <= M; ++i)
    {
        int dis;
        cin >> dis;

        all_dis.push_back({dis, 2});
    }
}

void solution()
{
    // Sort all distance of shots by ascending order.
    sort(all_dis.begin(), all_dis.end());

    // At first, let's say all the shots are 3-point shot. Then we try D equal to each d[i], fix the point of each shot base on that.
    int A_point = 3 * N, B_point = 3 * M, res = A_point - B_point;
    int last_A_point = A_point, last_B_point = B_point;
    for (auto e: all_dis)
    {
        if (e.second == 1) // This is the A-team point.
            --A_point;
        else // This is the B-team point.
            --B_point;

        if (res < (A_point - B_point))
        {
            res = A_point - B_point;
            last_A_point = A_point;
            last_B_point = B_point;
        }
    }

    cout << last_A_point << ':' << last_B_point;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}