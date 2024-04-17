#include<iostream>
using namespace std;
string s;
const int N = 1e7+2;
bool p[N];
int go[N];
int a,b;
void sieve () {
	int n = 1e7;
	for (int i=2; i<=n; i++) p[i] = 1;
	for (int i=2; i*i<=n; i++) {
		if (p[i]) for (int j=i*i; j<=n; j+=i) p[j] = 0;
	}
}
bool ok = 0;
int rev (int n) {
	int res = 0;
	while (n) {
		res = res*10+n%10;
		n /= 10;
	}
	return res;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	freopen("bai2.inp", "r", stdin);
//	freopen("bai2.out", "w", stdout);
	sieve();
	cin >> a >> b;
	int res = 0;
	for (int i=a; i<=b; i++) {
		if (p[rev(i)]) res++;
	}
	cout << res;
}
