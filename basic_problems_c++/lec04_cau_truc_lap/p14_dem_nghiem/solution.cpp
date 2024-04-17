#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = 0;
    for (int x = 1; x <= (c - b) / a; ++x)
    {
        double y = (double) (c - a * x) / b;

        if (y == (int) y)
            ++res;
    }

    cout << res;

    return 0;
}