#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	vector < int > a(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	
	sort(a.begin() + 1, a.end(), greater < int >());

	long long res = m / (k + 1) * (a[1] * k + a[2]);
	res += a[1] * (m % (k + 1));
	
	cout << res;

	return 0;
}