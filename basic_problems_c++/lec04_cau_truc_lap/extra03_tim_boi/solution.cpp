#include <iostream>

using namespace std;

int main()
{	
	int a, b, c;
	cin >> a >> b >> c;

	int res = -1;
	for (int i = a; i <= b; ++i)
		if (i % c == 0)
		{	
			res = i;
			break;
		}

	cout << res;

	return 0;
}