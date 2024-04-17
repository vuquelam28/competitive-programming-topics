#include <bits/stdc++.h>

using namespace std;

int main()
{
	int tc; 
	cin >> tc;

	while (tc--)
	{
		int k;
		cin >> k;
		cout << 100 / __gcd(k, 100) << '\n';
	}

	return 0;
}