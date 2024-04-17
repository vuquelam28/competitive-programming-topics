#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
const int M = 1e3 + 7;
int n;
int a[N];
int dak[N];
int mim[N];
int dp[M];
bool ban[N];
signed main () {
	ios::sync_with_stdio (false);
	cin.tie(0);
	cin >> n;
	int now = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ban[a[i]] = 1;
		while (ban[now]) {
			now++;
		}
		dak[i] = now - 1;
	}
	for (int i = n; i >= 1; i--) {
		mim[i] = mim[i + 1];
		if (a[i]==i) {
			mim[i]++;
		}
		else {
	 		 mim[i] = 0;
		}
	}
	int m = sqrt (n);
	dp[0] = mim[1];
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j < i; j++) {
			int pos = dp[j] + (i - j + 1) * (i - j + 1) - 1;
			pos = min (pos, n);
			dp[i] = max (dp[i], dak[pos]);
			if (dak[pos]==pos) {
				dp[i] = max (dp[i], dak[pos] + mim[pos + 1]);
			}
		}
	}
	for (int i = 0; i <= m; i++) {
		if (dp[i]==n) {
			cout << i;
			return 0;
		}
	}
}

