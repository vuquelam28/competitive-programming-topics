#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6+5;
int p[N];
void sieve () {
	int n = 1e6;
	for (int i=2; i<=n; i++) p[i] = i;
	for (int i=2; i*i<=n; i++) {
		if (p[i] == i) for (int j=i*i; j<=n; j+=i) p[j] = i;
	}
}
bool check (int n) {
	int x = sqrt(n);
	return x*x != n;
}
signed main() {
	sieve();
	int a,b; cin >> a >> b;
	a = sqrt(a)+check(a);
	b = sqrt(b);
	int res = 0;
	for (int i=a; i<=b; i++) if (p[i] == i) res++;
	cout << res;
}

