#include <bits/stdc++.h>
#define int long long

using namespace std;

main() 
{
    int n;
	cin >> n;
	n *= 2;

    int res = 0;
	for (int i = 1; i <= sqrt(n); ++i) 
		if (n % i == 0)
		    res += ((i + n / i) % 2 == 1);

	cout << res;
}
