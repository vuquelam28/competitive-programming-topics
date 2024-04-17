#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
int a[maxn], b[maxn], c[maxn];

void solution(int n) 
{
	b[n] = c[n] = a[n];
	for (int i = n - 1; i >= 1; --i) 
	{
		b[i] = (b[i + 1] < a[i]) ? b[i + 1] : a[i];
		c[i] = (c[i + 1] > a[i]) ? c[i + 1] : a[i];
	}

	for (int i = 1; i <= n; ++i) 
		cout << b[i] << ' ' << c[i] << endl; 
}

signed main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	solution(n);

	return 0;
}