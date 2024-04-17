#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 2e5 + 10;
int n, k;
vector < int > p_left, p_right;

void enter()
{
    cin >> n >> k;

    p_left.clear();
    p_right.clear();

    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;

        if (a < 0)
            p_left.push_back(-a);
        else
            p_right.push_back(a);
    }
}

void solution()
{
    sort(p_left.begin(), p_left.end(), greater < int >());
    sort(p_right.begin(), p_right.end(), greater < int >());

    int minimum_distance = 0;
    for (int i = 0; i < p_left.size(); i += k)
        minimum_distance += 2 * p_left[i];
    for (int i = 0; i < p_right.size(); i += k)
        minimum_distance += 2 * p_right[i];

    int save_distance = 0;
    if (!p_left.empty())
        save_distance = p_left.front();
    if (!p_right.empty())
        save_distance = max(save_distance, p_right.front());

    cout << minimum_distance - save_distance << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest = 1;

    while (ntest--)
    {
        enter();
        solution();
    }

    return 0;
}