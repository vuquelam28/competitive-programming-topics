#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+100;
int p[N];
void sieve() {
	int n = 1e7+10;
	for (int i=2; i<=n; i++) p[i] = 1;
	for (int i=2; i*i <=n; i++) {
		if (p[i]) for (int j=i*i; j<=n; j+=i) p[j] = 0;
	} 
}
const int M = 1e5+5;
int n,q;
int a[M],s[M];
bool prime (int n) {
	if (n < 2) return false;
	for (int i=2; i<=sqrt(n); i++) if (n%i == 0) return false;
	return true; 
}
bool bigcheck (int n) {
	bool ok = 0;
	for (int i=0; i<=9; i++) {
		if (prime(n*10+i)) ok = 1;
	}
	if (!ok) return false;
	while (n) {
		if (prime(n) == 0) return false;
		n /= 10;
	}
	return true;
}
bool check (int n) {
	if (n > 1e6) return bigcheck(n);
	bool ok = 0;
	for (int i=0; i<=9; i++) {
		if (p[n*10+i]) ok = 1;
	}
	if (!ok) return false;
	while (n) {
		if (p[n] == 0) return false;
		n /= 10;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("Bai2.inp", "r", stdin);
	freopen("Bai2.out", "w", stdout);
	sieve();
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
		s[i] = s[i-1] + check(a[i]);
	}
	cin >> q;
	while (q--) {
		int u,v; cin >> u >> v;
		cout << s[v] - s[u-1] << '\n';
	}
}
