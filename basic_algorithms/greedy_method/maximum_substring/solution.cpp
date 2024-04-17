#include <bits/stdc++.h>
#define int long long
#define task "maximum_substring."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

const int maxn = 1e5 + 10;
string s;
int k, cnt[26];

void enter()
{
    cin >> s >> k;
}

void solution()
{
    for (char c: s)
        ++cnt[c - 'a'];

    vector < char > res;
    int last_chosen = 0;
    for (int id = 25; id >= 0; --id)
        if (cnt[id] >= k)
        {
            int new_last = last_chosen;
            for (int i = last_chosen; i < s.size(); ++i)
                if (s[i] - 'a' == id)
                {
                    res.push_back(s[i]);
                    new_last = i;
                }
                else
                    --cnt[s[i] - 'a'];

            last_chosen = new_last;
        }

    if (res.empty())
        cout << -1;
    else 
        for (char c: res)
            cout << c;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}


