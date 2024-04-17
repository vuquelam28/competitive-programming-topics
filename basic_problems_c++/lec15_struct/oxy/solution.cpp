#include<bits/stdc++.h>
#define int long long

using namespace std;

struct Point 
{
	int x, y;

	int square(int x) 
	{
		return x * x;
	}

	void input() 
	{
		cin >> x >> y;
	}
	
	int euclid(Point a) 
	{
		int res = sqrt(square(x - a.x) + square(y - a.y));
		return res;
	}

	int manhattan(Point a) 
	{
		return abs(x - a.x) + abs(y - a.y);
	}
};

int main()
{	
	Point a;
	a.input();

	int q; 
	cin >> q;

	while (q--) 
	{
		int t; 
		Point b;

		cin >> t; 
		b.input();

		if (t == 1)
			cout << a.euclid(b) << endl;
		else
			cout << a.manhattan(b) << endl;
	}

	return 0;
}