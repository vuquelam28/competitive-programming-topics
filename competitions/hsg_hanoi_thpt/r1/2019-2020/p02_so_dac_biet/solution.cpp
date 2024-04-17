#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int a,b,k;
int pao[20];
void make () {
	pao[0] = 1;
	for (int i=1; i<=19; i++) pao[i] = pao[i-1]*10;
}

main() {
	cin >> a >> b >> k;
	make();
	for (int i=2; i<=18; i++){
		int x = a*pao[i]+b;
		int y = k - 10;
		if (x%y == 0) {
			cout << x/y;
			return 0;
		}
	}
	cout << -1;
}
