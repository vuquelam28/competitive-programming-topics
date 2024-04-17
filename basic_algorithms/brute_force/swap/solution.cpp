#include <bits/stdc++.h>
#define int long long
#define task "Swap."
#define inf 1e9 + 7
#define x first
#define y second

using namespace std;
const int maxN = 2e5 + 10;
int a, b, res, N, K, subject[maxN];

void solution(int a, int b)
{
    // Nếu hai bạn học hai môn khác nhau
    if (subject[a] != subject[b])
    {
        if (a <= N && b > N)
            res -= (subject[a] - subject[b]);
        if (a > N && b <= N)
            res -= (subject[b] - subject[a]);
    }

    swap(subject[a], subject[b]); // Đổi chỗ hai bạn.

    cout << res << endl;
}

main()
{
    freopen(task"inp", "r", stdin);
    freopen(task"out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> K;
    for (int i = 1; i <= N; ++i)
    {
        subject[i] = 1; // Những bạn học Tin đánh dấu là 1.
        subject[N + i] = 0; // Những bạn học Sử đánh dấu là 0.
    }

    res = N; // Ban đầu có N bạn học Tin đứng ở nửa đầu của hàng.
    while (K--)
    {
        int a, b;
        cin >> a >> b;
        solution(a, b);
    }

    return 0;
}


