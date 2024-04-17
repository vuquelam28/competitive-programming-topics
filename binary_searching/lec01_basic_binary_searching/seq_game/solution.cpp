#include <bits/stdc++.h>
#define int long long

using namespace std;

void enter(int &m, int &n, int &k, vector < int > &a, vector < int > &b)
{
    cin >> m >> n >> k;

    a.resize(m + 1);
    for (int i = 1; i <= m; ++i)
        cin >> a[i];

    b.resize(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
}

int solution(int s, int m, int n, vector < int > &a, vector < int > &b)
{
    int res = LLONG_MAX;
    sort(b.begin() + 1, b.end());

    for (int i = 1; i <= m; ++i)
    {
        int pos1 = lower_bound(b.begin() + 1, b.end(), s - a[i]) - b.begin(); // Tìm b[j] nhỏ nhất mà s - a[i] <= b[j]
        int pos2 = 0;

        if (pos1 != n + 1 && pos1 > 1) // Nếu tồn tại b[j] và j > 1 thì pos2 chính bằng j - 1.
            pos2 = pos1 - 1;

        if (pos1 != 0 && pos1 != n + 1)
            res = min(res, a[i] + b[pos1] - s);
        if (pos2 != 0)
            res = min(res, s - (a[i] + b[pos2]));
    }

    cout << res << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n, k;
    vector < int > a, b;

    enter(m, n, k, a, b);

    while (k--)
    {
        int s;
        cin >> s;
        
        solution(s, m, n, a, b);
    }

    return 0;
}