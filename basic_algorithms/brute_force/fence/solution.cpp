#include <bits/stdc++.h>
#define int long long
#define task "fence."

using namespace std;

const int maxn = 2e5 + 10;

void enter(int &m, vector < int > &c)
{
    cin >> m;

    c.resize(m + 1);
    for (int i = 1; i <= m; ++i)
        cin >> c[i];
}

// Find incorrect positions in the original array.
vector < int > find_incorrect_pos(int m, vector < int > &c)
{
    vector < int > incorrect_pos;
    int i = 1;
    while (i < m)
    {
        if (i & 1)
        {
            // Three consecutive incorrect positions, this case happens 
            // when there exists a position i + 2.
            if (i + 2 <= m && c[i] >= c[i + 1] && c[i + 1] <= c[i + 2])
            {
                incorrect_pos.push_back(i);
                incorrect_pos.push_back(i + 1);
                incorrect_pos.push_back(i + 2);

                i += 3;
            }
            else if (c[i] >= c[i + 1])
            {
                incorrect_pos.push_back(i);
                incorrect_pos.push_back(i + 1);

                i += 2;
            }
            else
                ++i;
        }
        else
        {
            if (i + 2 <= m && c[i] <= c[i + 1] && c[i + 1] >= c[i + 2])
            {
                incorrect_pos.push_back(i);
                incorrect_pos.push_back(i + 1);
                incorrect_pos.push_back(i + 2);

                i += 3;
            }
            else if (c[i] <= c[i + 1])
            {
                incorrect_pos.push_back(i);
                incorrect_pos.push_back(i + 1);

                i += 2;
            }
            else
                ++i;
        }
    }

    return incorrect_pos;
}

// Check if a position is correct.
bool is_correct_pos(int p, int m, vector < int > &c)
{
    if (p == 1)
        return c[p] < c[p + 1];
    else if (p == m)
        return ((p & 1 && c[p - 1] > c[p]) || (p % 2 == 0 && c[p - 1] < c[p]));
    else
    {
        if (p & 1)
            return (c[p] < c[p + 1] && c[p - 1] > c[p]);
        else
            return (c[p] > c[p + 1] && c[p - 1] < c[p]);
    }
}

void solution(int m, vector < int > &c)
{
    // Find incorrect positions in the original array and store them.
    vector < int > incorrect_pos = find_incorrect_pos(m, c);

    if (incorrect_pos.size() > 6)
    {
        cout << 0;
        return;
    }

    // Deal with the case where 3 < x <= 6, try swapping any two incorrect positions.
    int res = 0;
    if (incorrect_pos.size() > 3)
    {
        for (int i = 0; i < incorrect_pos.size() - 1; ++i)
            for (int j = i + 1; j < incorrect_pos.size(); ++j)
            {
                swap(c[incorrect_pos[i]], c[incorrect_pos[j]]);

                bool ok = true;
                for (int k: incorrect_pos)
                    ok &= is_correct_pos(k, m, c);
                res += (ok == true);

                swap(c[incorrect_pos[i]], c[incorrect_pos[j]]);
            }
    }

    // In case x = 2 or 3, try swapping an incorrect position with any other
    // positions in the array. Note: mark the incorrect positions have been 
    // tried to avoid duplicate options.
    else
    {
        vector < int > used(m + 1, 0);
        for (int p: incorrect_pos)
        {
            for (int i = 1; i <= m; ++i)
                if (i != p && !used[i])
                {
                    swap(c[i], c[p]);

                    bool ok = is_correct_pos(i, m, c);
                    for (int k: incorrect_pos)
                        ok &= is_correct_pos(k, m, c);
                    res += (ok == true);

                    swap(c[i], c[p]);
                }

            used[p] = 1;
        }
    }

    cout << res;
}

main()
{
    //freopen(task"inp", "r", stdin);
    //freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    vector < int > c;

    enter(m, c);
    solution(m, c);
}


