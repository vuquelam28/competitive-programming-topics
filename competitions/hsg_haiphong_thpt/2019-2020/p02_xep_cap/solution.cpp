#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1e5+5;
int a[N],b[N];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> m >> n;
	for (int i=1; i<=m; i++) {
		cin >> a[i];
	}
	for (int i=1; i<=n; i++) {
		cin >> b[i];
	}
	sort(a+1,a+m+1);
	sort(b+1,b+n+1);
	int res = 0, j = n;
	for (int i=m; i>=1; i--) {
		while (j >= 1 && a[i] <= b[j]) j--;
		if (j) res++,j--;
	}
	cout << res;
}
