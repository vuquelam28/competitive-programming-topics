#include <bits/stdc++.h>
#define int long long

using namespace std;

struct Math 
{
	int add(int x, int y) 
	{
		return x + y;
	}

	int subtract(int x, int y) 
	{
		return x - y;
	}

    int min(int x, int y) 
	{
		return x < y ? x : y;
	}

	int max(int x, int y) 
	{
		return x > y ? x : y;
	}

	int pow(int x, int y) 
	{
		int res = 1;
		for (int i = 1; i <= y; i++) 
			res *= x;

		return res;
	}
};

main() 
{
	int t; 
	cin >> t;

	Math q;
	while (t--)
	{
		int t, a, b; 
		cin >> t >> a >> b;
		if (t == 1)
			cout << q.add(a, b) << endl;
		else if (t == 2)
			cout << q.subtract(a, b) << endl;
		else if (t == 3)
			cout << q.min(a, b) << endl;
		else if (t == 4)
			cout << q.max(a, b) << endl;
		else
			cout << q.pow(a, b) << endl;
	}

	return 0;
}