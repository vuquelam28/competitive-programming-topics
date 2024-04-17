#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int ntest;
    cin >> ntest;

    while (ntest--)
    {
        int a, b;
        cin >> a >> b;
        
        int max_lcm = 0;
        for (int x = b; ; --x)
        {
            int gcd = __gcd(a, x);
            max_lcm = max(max_lcm, x * a / gcd);

            if (gcd == 1)
                break;
        }

        cout << max_lcm << endl;
    }

    return 0;
}