#include <bits/stdc++.h>
#define int long long

using namespace std;

string s1, s2;
vector < int > all_pos;

void backtrack(int i, int &cur)
{
    if (i == s2.size())
    {
        all_pos.push_back(cur);
        return;
    }

    if (s2[i] != '?')
        backtrack(i + 1, cur);
    else
    {
        for (int j = 0; j <= 1; ++j)
        {
            if (j == 0)
                cur += 1;
            else
                cur -= 1;

            backtrack(i + 1, cur);

            if (j == 0)
                cur -= 1;
            else
                cur += 1;
        }
    }
}

void solution(string &s1, string &s2)
{
    int des = 0;
    for (int i = 0; i < s1.size(); ++i)
        des = (s1[i] == '+') ? des + 1 : des - 1;
    int cur = 0;
    for (int i = 0; i < s2.size(); ++i)
        if (s2[i] != '?')
            cur = (s2[i] == '+') ? cur + 1 : cur - 1;

    backtrack(0, cur);

    int cnt = 0;
    for (auto e: all_pos)
        cnt += (e == des);

    cout << fixed << setprecision(10) << (double) cnt / (double) all_pos.size();
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s1 >> s2;

    solution(s1, s2);

    return 0;
}
