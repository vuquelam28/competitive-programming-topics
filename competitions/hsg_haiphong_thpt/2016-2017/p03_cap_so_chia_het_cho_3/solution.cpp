#include<bits/stdc++.h>
using namespace std;
int cnt[3];
int n,m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i=1; i<=n; i++) {
		int a; cin >> a;
		cnt[a%3]++;
	}
	for (int i=1; i<=m; i++) {
		int b; 
		cin >> b;
		int need = (3-b%3)%3;
		cout << cnt[need] << '\n';
	}
}
