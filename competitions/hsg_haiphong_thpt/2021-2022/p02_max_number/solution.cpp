#include<bits/stdc++.h>
using namespace std;
int n;
const int N = 1e5+5;
string a[N];
bool cmp (string &a, string &b) {
	if (a + b > b + a) return 1;
	else return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("bai2.inp", "r", stdin);
	freopen("bai2.out", "w", stdout);
	cin >> n;
	for (int i=1; i<=n; i++) {
		cin >> a[i];
	}
	sort (a+1,a+n+1,cmp);
	for (int i=1; i<=n; i++) cout << a[i];
}
