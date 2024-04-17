#include <bits/stdc++.h>
#define task "FINDPOS."
#define inf 1e9 + 7

using namespace std;
const int maxn = 1e6 + 10;
int n, ntest;
long long a[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> ntest;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

int solve(long long k)
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] == k)
            return mid;
        if (a[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}

int main()
{
    enter();
    while (ntest--)
    {
        long long k;
        cin >> k;
        cout << solve(k) << endl;
    }
    return 0;
}


