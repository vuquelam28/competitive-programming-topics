#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double s = 0;
    for (int i = 1; i <= n; ++i)
    {
        double deno = i * (i + 1) / 2.0;

        if (i % 2 == 1)
            s += (1 / deno);
        else
            s -= (1 / deno);
    }

    cout << fixed << setprecision(3) << s;

    return 0;
}
