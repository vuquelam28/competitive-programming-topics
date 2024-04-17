#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
    int n, k;
    cin >> n >> k;

    int expo = 1;
    for (int i = 1; i <= k; ++i)
        expo *= i;

    cout << expo / __gcd(expo, n) * n;
    
    return 0;
}