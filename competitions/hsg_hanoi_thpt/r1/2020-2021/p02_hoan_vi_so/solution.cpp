#include <bits/stdc++.h>
#define int long long
#define task "NumPer."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;

string N;
int digit_sum, cnt[10];

void enter()
{
    cin >> N;
}

void solution()
{
    for (int i = 0; i < N.size(); ++i)
    {
        ++cnt[N[i] - '0'];
        digit_sum += (N[i] - '0');
    }

    if (digit_sum % 3 != 0 || !cnt[0])
    {
        cout << -1;
        return;
    }

    for (int i = 9; i >= 0; --i)
        for (int j = 1; j <= cnt[i]; ++j)
            cout << i;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    enter();
    solution();

    return 0;
}
