#include <bits/stdc++.h>
#define int long long

using namespace std;

const int maxn = 1e5 + 10;
int N, K, gift_size[maxn];

void enter()
{
    cin >> N >> K;
    for (int i = 1; i <= N; ++i)
        cin >> gift_size[i];
}

void solution()
{
    int min_box_size = gift_size[N];

    while (2 * K != N)
        --N, --K;

    for (int i = 1; i <= N / 2; ++i)
        min_box_size = max(min_box_size, gift_size[i] + gift_size[N - i + 1]);

    cout << min_box_size;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    enter();
    solution();

    return 0;
}


