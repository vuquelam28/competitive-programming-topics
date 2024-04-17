#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("Bai1.inp", "r", stdin);
	freopen("Bai1.out", "w", stdout);
	getline(cin,s);
	for (char x : s) {
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) cout << x;
	}
}
