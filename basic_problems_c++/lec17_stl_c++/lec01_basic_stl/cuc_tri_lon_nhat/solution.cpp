#include <bits/stdc++.h>

using namespace std;

main()
{
    int n;
    cin >> n;
    
    vector < int > a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    
    if (n == 1)
    {
        cout << "No solution";
        return 0;
    }
    
    int max_value = INT_MIN;
    if (a[1] > a[2] || a[1] < a[2])
        max_value = a[1];
    if (a[n] > a[n - 1] || a[n] < a[n - 1])
        max_value = max(max_value, a[n]);

    for (int i = 2; i <= n - 1; ++i)
        if ((a[i - 1] < a[i] && a[i] > a[i + 1]) || (a[i - 1] > a[i] && a[i] < a[i + 1]))
            max_value = max(max_value, a[i]);
    
    if (max_value == INT_MIN)
        cout << "No solution";
    else 
        cout << max_value;
}