#include<bits/stdc++.h>
using namespace std;
int n,k;
const int N = 1e5+5;
int a[N];
bool cp (int n) {
	int x = sqrt(n);
	return x*x == n;
}
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	int res = 0;
	for (int i=1; i<=n; i++) {
		int cur = a[i];
		for (int j=i-1; j>=max(1,i-k+1); j--) {
			cur += a[j];
			if (cur <= k && cp(cur)) res++;
		}
	}
	cout << res << '\n';
} 
