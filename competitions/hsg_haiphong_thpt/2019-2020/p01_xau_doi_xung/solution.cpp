#include <bits/stdc++.h>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; 
	cin >> t;
	while (t--) 
	{
		string s; 
		cin >> s;

		string a = s;
		reverse(a.begin(),a.end());

		if (a != s) 
			cout << "KHONG\n";
		else 
			cout << "CO\n";
	}
}
