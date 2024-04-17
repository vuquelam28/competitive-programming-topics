#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector < int > a(n + 1);
	for (int i = 1; i <= n; ++i)
		cin >> a[i];

	int check = 0;
	for(int i = 1; i < n; ++i)
		if (a[i] <= a[i + 1])
			check = 1;
	
	if (check) 
		cout << "YES";
	else 
		cout << "NO";

	return 0;
}