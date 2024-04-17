#include <bits/stdc++.h>
#define int long long

using namespace std;

main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int mx = 0, res = 0;
    for (int i = 1; i <= n; i++) 
    {
        int a, b; 
        cin >> a >> b;

        int d = __gcd(a, b);
        if (d > mx) 
        {
            mx = d;
		res = (a / d) * (b / d);
	  } 
	  else if (d == mx)
            res += (a / d) * (b / d);
    }

    cout << res;
}

