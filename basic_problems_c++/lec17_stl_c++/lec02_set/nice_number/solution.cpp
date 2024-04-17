#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &n, int &k, vector < string > &a)
{
    cin >> n >> k;

    a.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solution(int n, int k, vector < string > &a)
{
    int res = 0;
    for (int i = 1; i <= n; ++i)
    {
        set < char > digits;
        for (char d: a[i])
        {
            if (d - '0' > k)
                continue;

            digits.insert(d);
        }

        res += (digits.size() == k + 1);
    }

    cout << res;
}

main()
{
    int n, k;
    vector < string > a;

    enter(n, k, a);
    solution(n, k, a);

    return 0;
}