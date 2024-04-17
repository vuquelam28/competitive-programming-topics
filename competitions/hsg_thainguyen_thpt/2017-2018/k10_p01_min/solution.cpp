#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
int p[16];
int power[16];
int pre[16];
int xuli() {
	int res = 0;
	int current = n;
	pre[0] = 0;
	for (int i=0; i<16; i++) {
		if (i) pre[i] = pre[i-1];
		if (p[i] == 1) {
			current -= 5*power[i];
			res += 5*power[i];
		//	pre[i] += 5*power[i];
		}
		else pre[i] += 9*power[i];
	} 
	for (int i=15; i>=0; i--) {
		if (p[i]) continue;
		if (current <= 0) continue;
		int digit = current / power[i];
		if (digit == 5) digit++;
		if (i > 0 && pre[i-1] < current - digit*power[i]) {
			digit++;
		}
		res += digit*power[i];
		current -= digit*power[i];
	}
	if (current > 0) return 1e18;
	return res;
}
int res = 1e18;
void ql (int id, int cnt){
	if (cnt > k) return;
	if (id == 16) {
		if (cnt == k) res = min (res,xuli());
		return;
	}
	p[id] = 0;
	ql(id+1,cnt);
	p[id] = 1;
	ql(id+1,cnt+1);
}

signed main() {
	cin >> n >> k;
	n++;
	power[0] = 1;
	for (int i=1; i<16; i++) power[i] = power[i-1]*10;
	ql(0,0);
	cout << res;
}

