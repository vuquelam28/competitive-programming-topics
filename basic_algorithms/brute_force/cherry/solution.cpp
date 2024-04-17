#include <bits/stdc++.h>
#define int long long

using namespace std;

main()
{
	int n;
	cin >> n;

	vector < int > a(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	int res = 0;
	for (int i = 1; i < n; ++i)
		res = max(res, a[i] * a[i + 1]);

	cout << res;

	return 0;
}