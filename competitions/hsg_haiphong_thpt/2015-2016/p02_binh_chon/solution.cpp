#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
const int N = 1e5+5;
int cnt[N];
int mx = 0;
vector<int> res;
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i=1; i<=n; i++) {
		int x; cin >> x;
		cnt[x]++;
		if (cnt[x] > mx) {
			res.clear();
			res.push_back(x);
			mx = cnt[x];
		}
		else if (cnt[x] == mx) {
			res.push_back(x);
		}
	}
	sort (res.begin(),res.end());
	for (int x : res) cout << x << '\n';
} 
