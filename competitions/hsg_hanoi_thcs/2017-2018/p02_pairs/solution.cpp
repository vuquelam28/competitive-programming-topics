#include <bits/stdc++.h>
#define task "PAIR."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1e6 + 10;
int n, a[maxn], cnt[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void solve()
{
    // Su dung mang dem phan phoi, tuy nhien thay vi dem truc tiep a[i], ta se dem cac gia tri a[i] + minv
    // voi muc dich de lam duong cac so a[i] len.
    int minv = abs(*min_element(a + 1, a + 1 + n)), res = 0;
    cnt[a[1] + minv] = 1;

    for (int i = 2; i <= n; ++i)
    {
        res += cnt[-a[i] + minv];
        cnt[a[i] + minv]++;
    }

    cout << res;
}

int main()
{
    enter();
    solve();
    return 0;
}