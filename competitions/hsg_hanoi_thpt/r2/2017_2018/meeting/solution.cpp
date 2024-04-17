#include <bits/stdc++.h>
#define int long long
#define task "Meeting."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxn = 1001;
int N, dp[maxn];
pair < int, int > m_time[maxn];
string cnt[maxn];

void enter()
{
    cin >> N;

    for (int i = 1; i <= N; ++i)
        cin >> m_time[i].first >> m_time[i].second;
}

// Add two big-number by string
string big_add(string a, string b)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;

    int remember = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        int sum = (a[i] - '0') + (b[i] - '0') + remember;

        res = (char)(sum % 10 + 48) + res;
        remember = sum / 10;
    }

    if (remember)
        res = '1' + res;

    return res;
}

void solution()
{
    // Sort the list of meetings by a[i]. Here I used std::pair.
    sort(m_time + 1, m_time + N + 1);

    for (int i = 1; i <= N; ++i)
    {
        // Find jmax that dp[jmax] is maximum and the i-th meeting and j-th meeting are chosen simultaneously.
        int jmax = 0;
        for (int j = 1; j < i; ++j)
            if (dp[jmax] < dp[j] && m_time[i].first > m_time[j].second)
                jmax = j;

        // Optimize dp[i].
        dp[i] = dp[jmax] + 1;

        // Find how many ways to create dp[i] from dp[j]. Use big-number as the number of ways can be very large.
        for (int j = 1; j < i; ++j)
            if (dp[j] == dp[i] - 1 && m_time[i].first > m_time[j].second)
                cnt[i] = big_add(cnt[i], cnt[j]);

        if (cnt[i].empty())
            cnt[i] = "1";
    }

    // Get the last result.
    int res = *max_element(dp + 1, dp + N + 1);
    string number_of_ways;
    for (int i = 1; i <= N; ++i)
        if (dp[i] == res)
            number_of_ways = big_add(number_of_ways, cnt[i]);

    cout << res << ' ' << number_of_ways;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}


