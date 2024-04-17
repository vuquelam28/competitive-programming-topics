#include <bits/stdc++.h>

using namespace std;

int a[100001];

main()
{
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    
    a[0] = 0;
    int sum = 0;
    for(int i = 1; i <= n; ++i)
        sum += abs(a[i] - a[i - 1]);
    
    cout << sum + (2 * n - 1);

    return 0;
}