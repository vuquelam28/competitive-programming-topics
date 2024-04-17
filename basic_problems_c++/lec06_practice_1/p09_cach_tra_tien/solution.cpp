#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int res = 0;
    for (int x = 0; x <= n; ++x)
        for (int y = 0; y <= n / 2; ++y)
            for (int z = 0; z <= n / 5; ++z)
                if (x + 2 * y + 5 * z == n)
                    ++res;

    cout << res;

    return 0;
}