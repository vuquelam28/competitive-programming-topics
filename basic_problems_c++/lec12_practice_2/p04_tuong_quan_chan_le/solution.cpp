#include <iostream>

using namespace std;

int a[1001];

main()
{
    int n;
    cin >> n;

    int odd = 0, even = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
            ++even;
        else 
            ++odd;
    }

    if (even > odd)
        cout << -1;
    else if (even == odd)
        cout << 0;
    else 
        cout << 1;

    return 0;
}