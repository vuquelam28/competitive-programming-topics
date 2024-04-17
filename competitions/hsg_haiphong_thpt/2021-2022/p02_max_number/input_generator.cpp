#include<bits/stdc++.h>
using namespace std;
#define int long long
namespace make {
	const int N = 1e5+5;
	const int mod = 1e6;
	int ran() {
		int res = 0;
		for (int i=30; i>=0; i--) {
			if (rand()%2) res += (1 << i);
 		}
 		return res;
	}
	int a[N],p[N];
	void gen() {
		int n = rand()%10000+1;
		cout << n << endl;
		int num = rand()%2+1;
		for (int i=1; i<=n; i++) {
			cout << rand()%9+1;
			
			for (int j=1; j<num; j++) cout << rand()%10;
			cout << ' ';
		}
		cout << endl;
	}
}
namespace sol {
	int n;
	const int N = 1e5+5;
	string a[N];
	bool cmp (string &a, string &b) {
		if (a + b > b + a) return 1;
		else return 0;
	}
	void solve () {
		cin >> n;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		sort (a+1,a+n+1,cmp);
		for (int i=1; i<=n; i++) cout << a[i];
		cout << endl;
	}
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	srand(time(0));
	string s = "Bai2";
	for(int i = 18; i <= 20; i++){
        system(("mkdir test" + to_string(i)).c_str());
        freopen((".\\test" + to_string(i) + "\\" + s + ".inp").c_str(), "w", stdout);
        make::gen();
        freopen((".\\test" + to_string(i) + "\\" + s + ".inp").c_str(), "r", stdin);
        freopen((".\\test" + to_string(i) + "\\" + s + ".out").c_str(), "w", stdout);
        sol::solve();
    }
}
