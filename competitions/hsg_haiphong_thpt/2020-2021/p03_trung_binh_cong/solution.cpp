#include<bits/stdc++.h>
using namespace std;
int n,k;
map<int,int> m;
const int N =1e5+5;
int a[N];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("Bai3.inp", "r", stdin);
	freopen("Bai3.out", "w", stdout);
	cin >> n >> k;
	k*=2;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n; i++) {
		if (m.count(k-a[i])) {
			cout << i << ' ' << m[k-a[i]];
			return 0;
		}
		m[a[i]] = i;
	}
	cout << 0 << ' ' << 0;
}
