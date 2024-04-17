#include <bits/stdc++.h>
#define int long long

using namespace std;

bool check(int n, int k) 
{
	int res = n / 3 + n / 5 - n / 15;
	return res >= k;
}

void solution(int k) 
{	
	int l = 1, r = 1e16;
	int res = 0;
	while (r >= l) 
	{
		int mid = (r + l) >> 1;
		if (check(mid, k)) 
			res = mid, r = mid - 1;
		else 
			l = mid + 1;
	}

	cout << res;
}

main() 
{
	int k;
	cin >> k;

	solution(k);

	return 0;
}