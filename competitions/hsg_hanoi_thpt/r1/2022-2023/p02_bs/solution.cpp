#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, x;

void solve () {
	int res = 0;
	cin >> n >> x;
	for (int i=1;i<=n;i++) {
		if (x%i) continue;
		res += (x/i <= n);
	}
	cout << res;
}

signed main () 
{
	solve ();
	
}

