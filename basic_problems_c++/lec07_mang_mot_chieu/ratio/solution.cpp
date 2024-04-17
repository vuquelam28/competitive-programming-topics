#include <bits/stdc++.h>

using namespace std;

int a[101];

main()
{
    int n;
    cin >> n;

    int negative = 0, positive = 0, zero = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];

        negative += (a[i] < 0);
        positive += (a[i] > 0);
        zero += (a[i] == 0);
    }

    cout << fixed << setprecision(6) << 1.0 * positive / n << endl
         << 1.0 * negative / n << endl 
         << 1.0 * zero / n;
}