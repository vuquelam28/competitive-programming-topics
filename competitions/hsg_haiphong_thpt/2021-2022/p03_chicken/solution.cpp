#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x;
const int N = 505;
int p[N],t[N];
bool check (int mid) {
	int res = 0;
	for (int i=1; i<=n; i++) {
		if (mid >= p[i]) {
			res++;
			res += (mid-p[i])/t[i];
		}
	}
	return res >= x;
}
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> x;
	for (int i=1; i<=n; i++) {
		cin >> p[i] >> t[i];
	}
	int l = 1, r = 1e18, res = 0;
	while (r >= l) {
		int mid = (r+l) >> 1;
		if (check(mid)) res = mid, r = mid-1;
		else l = mid+1;
	}
	cout << res;
}
