#include <bits/stdc++.h>

using namespace std;

int a[101], b[101];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
            b[i] = a[2];
        else if (i == n)
            b[i] = a[n - 1];
        else
            b[i] = a[i - 1] + a[i + 1];

        cout << b[i] << endl;
    }

    return 0;
}