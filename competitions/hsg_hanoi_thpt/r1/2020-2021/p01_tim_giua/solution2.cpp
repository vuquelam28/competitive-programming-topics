#include <bits/stdc++.h>
#define int long long
using namespace std;
int f (int l, int r) {
	return (r-l+1)*(r+l)/2;
}
int cal (int l, int m, int r) {
	int a = f(l,m) - f(m+1,r);
	if (a < 0) a = -a;
	return a;
}
signed main() {
	int l, r;
	cin >> l >> r;
	int a = 2;
	int b = 1;
	int c = -(r*r+l*l+r-l);
	long double delta = b*b-a*c;
	int x = (-b+sqrtl(delta))/(a);
	int res = x;
	if (cal(l,x,r) >= cal(l,x+1,r)) res = x+1, x++;
	cout << res;
}
