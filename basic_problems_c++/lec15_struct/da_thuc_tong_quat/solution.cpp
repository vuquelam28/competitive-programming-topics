#include <bits/stdc++.h>
#define int long long

using namespace std;

struct Dathuc
{
    int n;
    int a[11];

    Dathuc() {}

    Dathuc(int _n, int b[11])
    {
        n = _n;
        for (int i = 0; i <= n; ++i)
            a[i] = b[i];
    }

    int power(int x, int y)
    {
        int ans = 1;
        for (int i = 1; i <= y; ++i)
            ans *= x;

        return ans;
    }

    int get_val(int v)
    {
        int ans = 0;
        for (int i = 0; i <= n; ++i)
            ans += a[i] * power(v, i);

        return ans;
    }
};

int b[11];

main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; ++i)
        cin >> b[i];

    Dathuc d(n, b);

    int q;
    cin >> q;

    while (q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            cin >> n;

            for (int i = 0; i <= n; ++i)
                cin >> b[i];

            d = Dathuc(n, b);
        }
        else
        {
            int v;
            cin >> v;

            cout << d.get_val(v) << endl;
        }
    }

    return 0;
}