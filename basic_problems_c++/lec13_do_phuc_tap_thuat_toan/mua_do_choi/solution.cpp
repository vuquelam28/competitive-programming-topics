#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    if (k <= n)
        cout << (k - 1) / 2;
    else
    {
        long long m = k - n;
        cout << max(0LL, (n - m + 1) / 2);
    }

    return 0;
}