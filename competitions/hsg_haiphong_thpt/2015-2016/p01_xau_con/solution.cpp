#include<bits/stdc++.h>
using namespace std;
#define int long long
string a,b;
signed main() {
	cin >> a >> b;
	int x = a.size();
	int y = b.size();
	int res = 0;
	for (int i=0; i<y; i++) {
		int ok = 1;
		for (int j=0; j<x; j++) {
			if (b[i+j] != a[j]) ok = 0;
		}
		res += ok;
	}
	cout << res;
} 
