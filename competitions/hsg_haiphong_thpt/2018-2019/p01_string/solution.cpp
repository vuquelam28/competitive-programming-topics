#include <bits/stdc++.h>
#define int long long

using namespace std;


main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string a, b;
	cin >> a >> b;

	int res = 0;
	for (int i = 0; i < a.size(); i++) 
		if (a[i] != b[i]) 
			res++;
			
	cout << res;
}
