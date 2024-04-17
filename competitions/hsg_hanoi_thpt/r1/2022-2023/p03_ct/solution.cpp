#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
const int N = 502;
const int M = 2e5 + 3;
int base = 1e5 + 1;
int n;
int a[N];
int dp[N][M];
signed main () {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	int sum = 0;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		sum += a[i];
	}
	base = sum + 1 ;
	for (int i=0;i<=n;i++) {
		for (int j=0;j<=base + sum;j++) {
			dp[i][j] = inf;
		}
	}
	dp[1][base - a[1]] = 0;
	dp[1][base + a[1]] = 0;
	dp[1][base] = a[1];
	for (int i=2;i<=n;i++) {
		for (int j=0;j <= base + sum;j++) {
			if (dp[i - 1][j]==inf) continue;
			if (j - a[i] >= 0) {
				dp[i][j - a[i]] = min (dp[i - 1][j], dp[i][j - a[i]]);
			}
			if (j + a[i] <= base + sum) {
				dp[i][j + a[i]] = min (dp[i][j + a[i]], dp[i - 1][j]);
			}
			dp[i][j] = min (dp[i][j], dp[i - 1][j] + a[i]);
		}
		
	}
//	cout << dp[n][base] << endl;
	cout << (sum - dp[n][base])/2;

	return 0;
}

