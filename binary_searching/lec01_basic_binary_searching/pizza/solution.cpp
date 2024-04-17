#include <bits/stdc++.h>
#define int long long
#define task "pizza."

using namespace std;

void enter(int &n, int &m, vector < int > &money)
{
    cin >> n >> m;

    money.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> money[i];
}

void solution(int &n, int &m, vector < int > &money)
{
    sort(money.begin() + 1, money.end());

    int possible_pairs = 0;
    for (int i = 1; i < n; ++i)
    {
        int l = i + 1, r = n;
        while (l <= r)
        {
            int mid = (l + r) >> 1;

            if (money[i] + money[mid] == m)
            {
                ++possible_pairs;
                break;
            }

            if (money[i] + money[mid] < m)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    cout << possible_pairs << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int n, m;
        vector < int > money;

        enter(n, m, money);
        solution(n, m, money);
    }

    return 0;
}