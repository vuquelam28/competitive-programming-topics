#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	int res = 0;
	for (char x : s) {
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) res++;
	}
	cout << res << '\n';
}
