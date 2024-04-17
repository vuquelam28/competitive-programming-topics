#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+5;
struct vcl {
	int l,r;
}a[N];
int n,k;
namespace sub1 {
	int f[N];
	int res;
	void solve () {
		for (int i=1; i<=n; i++) {
			int l = a[i].l, r = a[i].r;
			f[l]++; f[r+1]--;
		}
		int mx = 1e3;
		int res = 0;
		for (int i=1; i<=mx; i++) {
			f[i] += f[i-1];
			if (f[i] == k) res++;
		}
		cout << res;
	}
}
#define ii pair<int,int>
namespace sub3 {
	map<int,int> m;
	void solve () {
		for (int i=1; i<=n; i++) {
			int l = a[i].l, r = a[i].r;
			m[l]++; m[r+1]--;
		}
		vector<ii> v;
		for (map<int,int> ::iterator it = m.begin(); it != m.end(); it++) {
			ii dak = *it;
			v.push_back(dak);
		}
		int inf = 1e18;
		for (int i=1; i<v.size(); i++) {
			v[i].second += v[i-1].second;
		}
		int t = v.size();
		int res = 0;
		for (int i=0; i<t-1; i++) {
			if (v[i].second == k) {
				res += v[i+1].first - v[i].first;
			} 
		}
		cout << res;
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;
	int check = 1;
	for (int i=1; i<=n; i++) {
		int l,r; cin >> l >> r;
		a[i] = {l,r};
		if (r > 1e3) check = 0;
	}
	if (check) sub1::solve();
	else sub3::solve();
}