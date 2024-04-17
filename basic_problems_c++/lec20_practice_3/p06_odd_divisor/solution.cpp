#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
        cout << n;
    else 
    {
        while (n % 2 == 0)
            n /= 2;

        cout << n;
    }

    return 0;
}