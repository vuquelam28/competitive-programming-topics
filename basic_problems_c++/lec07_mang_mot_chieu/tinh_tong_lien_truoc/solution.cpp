#include <bits/stdc++.h>

using namespace std;

const int maxn = 1001;
int a[maxn];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int sum = a[1];
    for (int i = 2; i <= n; ++i)
        if (a[i] > a[i - 1])
            sum += a[i];

    cout << sum;
}