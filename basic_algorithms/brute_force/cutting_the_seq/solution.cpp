#include <bits/stdc++.h>

using namespace std;
int a[100001];

main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0;
    for (int i = 2; i <= n; ++i)
        res += (a[i] < a[i - 1]);
    
    cout << res + 1;

    return 0;
}