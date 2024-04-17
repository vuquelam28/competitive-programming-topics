#include<bits/stdc++.h>
using namespace std;
string a = "virus";
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("bai1.inp", "r", stdin);
	freopen("bai1.out", "w", stdout);
	string s;
	cin >> s;
	int sz = s.size();
	int res = 0;
	for (int i=0; i<sz-a.size()+1; i++) {
		string t = "";
		for (int j=0; j<a.size(); j++) t.push_back(s[i+j]);
		res += bool(a == t);
	}
	cout << res;
}
