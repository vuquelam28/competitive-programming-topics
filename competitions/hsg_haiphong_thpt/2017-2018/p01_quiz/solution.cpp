#include<iostream>
using namespace std;
string a,b;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("QUIZ.inp", "r", stdin);
	freopen("QUIZ.out", "w", stdout);
	cin >> a >> b;
	int res = 0;
	for (int i=0; i<a.size(); i++) {
		if (a[i] == b[i]) res++;
	}
	cout << res;
}
