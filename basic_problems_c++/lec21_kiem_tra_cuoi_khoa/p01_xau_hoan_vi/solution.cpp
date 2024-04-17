#include <bits/stdc++.h>
#define int long long
#define task "xau_hoan_vi."

using namespace std;

void solution(string &s, string &t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        string s, t;
        cin >> s >> t;

        solution(s, t);
    }

    return 0;
}