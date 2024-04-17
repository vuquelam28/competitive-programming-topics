#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int N = 1e6+5;
int a[N],s[N],res=-1e9;
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("SUMMAX.inp", "r", stdin);
	freopen("SUMMAX.out", "w", stdout);
	cin >> n;
	int mn = 0;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		s[i] = s[i-1] + a[i];
		res = max (res,s[i] - mn);
		mn = min (mn,s[i]);
	}
	cout << res;
}

