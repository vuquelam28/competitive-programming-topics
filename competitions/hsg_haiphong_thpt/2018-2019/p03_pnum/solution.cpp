#include<bits/stdc++.h>
#define int long long

using namespace std;

const int N = 1e6+5;
int p[N], a[N];
int n, m;

void preparation() 
{
	int n = 1e6;
	for (int i = 1; i <= n; i++)
		for (int j = 2 * i; j <= n; j += i) 
            p[j] += i;
}

signed main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	preparation();

	cin >> n >> m;
	for (int i = 1; i <= m; i++) 
    {
		int u, v, k; 
        cin >> u >> v >> k;

		a[u] += k;
		a[v + 1] -= k;
	}

	for (int i = 1; i <= n; i++) 
        a[i] += a[i - 1];

	for (int i = 1; i <= n; i++)
		if (p[a[i]] == a[i]) 
            cout << i << '\n';
}
